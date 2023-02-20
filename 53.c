#include <stdio.h>

int main() {
    FILE *file;
    char input[100];

    // open file in append mode
    file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // get input from user
    printf("Enter text to append: ");
    fgets(input, 100, stdin);

    // append input to file
    fprintf(file, "%s", input);

    // close the file
    fclose(file);

    printf("Text appended to file!\n");

    return 0;
}
