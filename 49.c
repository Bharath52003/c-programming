#include <stdio.h>

int main() {
   FILE *fp;
   char ch;

   // open the file in read mode
   fp = fopen("myfile.txt", "r");
   if (fp == NULL) {
      printf("Error opening the file");
      return -1;
   }

   // read the file character by character and print to screen
   while ((ch = fgetc(fp)) != EOF) {
      putchar(ch);
   }

   // close the file
   fclose(fp);

   return 0;
}
