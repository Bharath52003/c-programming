#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LENGTH 1000

int main() {
    char filename[100];
    char choice;
    char buffer[MAX_STR_LENGTH];
    FILE *fp;

    printf("Enter the name of the file to edit: ");
    scanf("%s", filename);

    fp = fopen(filename, "w+");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    do {
        printf("Enter command: (w)rite, (r)ead, (e)xit\n");
        scanf(" %c", &choice);

        switch (choice) {
            case 'w':
                printf("Enter text to write:\n");
                scanf(" %[^\n]s", buffer);
                fprintf(fp, "%s\n", buffer);
                break;
            case 'r':
                printf("File contents:\n");
                fseek(fp, 0, SEEK_SET);
                while (fgets(buffer, MAX_STR_LENGTH, fp)) {
                    printf("%s", buffer);
                }
                break;
            case 'e':
                printf("Exiting text editor.\n");
                break;
            default:
                printf("Invalid command.\n");
        }
    } while (choice != 'e');

    fclose(fp);
    return 0;
}
