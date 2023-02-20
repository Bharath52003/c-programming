#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char source_filename[] = "source.txt";
    char destination_filename[] = "destination.txt";
    char ch;

    source_file = fopen(source_filename, "r");
    destination_file = fopen(destination_filename, "w");

    if (source_file == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    if (destination_file == NULL) {
        printf("Unable to open destination file.\n");
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(destination_file);

    return 0;
}
