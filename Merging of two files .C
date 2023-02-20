#include <stdio.h>

int main() {
    FILE *source_file1, *source_file2, *destination_file;
    char source_filename1[] = "source1.txt";
    char source_filename2[] = "source2.txt";
    char destination_filename[] = "destination.txt";
    char ch;

    source_file1 = fopen(source_filename1, "r");
    source_file2 = fopen(source_filename2, "r");
    destination_file = fopen(destination_filename, "w");

    if (source_file1 == NULL) {
        printf("Unable to open source file 1.\n");
        return 1;
    }

    if (source_file2 == NULL) {
        printf("Unable to open source file 2.\n");
        return 1;
    }

    if (destination_file == NULL) {
        printf("Unable to open destination file.\n");
        return 1;
    }

    while ((ch = fgetc(source_file1)) != EOF) {
        fputc(ch, destination_file);
    }

    while ((ch = fgetc(source_file2)) != EOF) {
        fputc(ch, destination_file);
    }

    printf("Files merged successfully.\n");

    fclose(source_file1);
    fclose(source_file2);
    fclose(destination_file);

    return 0;
}
