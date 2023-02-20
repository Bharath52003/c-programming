#include <stdio.h>

int main() {
    FILE *source_file, *target_file;
    char source_file_name[20], target_file_name[20], ch;

    printf("Enter the source file name: ");
    scanf("%s", source_file_name);

    source_file = fopen(source_file_name, "r");

    if (source_file == NULL) {
        printf("Error opening the file %s\n", source_file_name);
        return 1;
    }

    printf("Enter the target file name: ");
    scanf("%s", target_file_name);

    target_file = fopen(target_file_name, "w");

    if (target_file == NULL) {
        printf("Error opening the file %s\n", target_file_name);
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(target_file);

    return 0;
}
