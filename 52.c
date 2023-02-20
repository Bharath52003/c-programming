#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("nonexistent_file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // read the file contents here

    fclose(fp);
    return 0;
}
