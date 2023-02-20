#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Pixel;

int main() {
    char *filename = "input_image.bmp";
    FILE *input_file = fopen(filename, "rb");

    if (!input_file) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Read BMP header
    unsigned char bmp_header[54];
    fread(bmp_header, sizeof(unsigned char), 54, input_file);

    // Read BMP data
    int width = *(int*)&bmp_header[18];
    int height = *(int*)&bmp_header[22];
    int row_size = (width * 3 + 3) & ~3;
    unsigned char *image_data = (unsigned char*)malloc(row_size * height);
    fread(image_data, sizeof(unsigned char), row_size * height, input_file);

    // Flip the image horizontally
    Pixel *image = (Pixel*)image_data;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width / 2; x++) {
            Pixel temp = image[y * width + x];
            image[y * width + x] = image[(y + 1) * width - x - 1];
            image[(y + 1) * width - x - 1] = temp;
        }
    }

    // Write the output image
    char *output_filename = "output_image.bmp";
    FILE *output_file = fopen(output_filename, "wb");

    if (!output_file) {
        printf("Unable to create output file.\n");
        return 1;
    }

    fwrite(bmp_header, sizeof(unsigned char), 54, output_file);
    fwrite(image_data, sizeof(unsigned char), row_size * height, output_file);

    fclose(input_file);
    fclose(output_file);
    free(image_data);

    printf("Image processing complete.\n");

    return 0;
}
