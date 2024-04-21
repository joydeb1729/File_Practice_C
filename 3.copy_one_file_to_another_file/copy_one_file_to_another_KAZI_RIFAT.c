/*
**file practise question**
@author_Durjay
solution by KAZI RIFAT MORSHED 230220

3. Write a C program to copy contents from one file to another file.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE *f1 = fopen("file3_1.txt", "r"), *f2 = fopen("file3_2.txt", "w");
  if (f1 == NULL || f2 == NULL) {
    printf("ERROR OPENING FILE");
    exit(EXIT_FAILURE);
  }

  char c1;
  while (1) {
    c1 = fgetc(f1);
    fputc(c1, f2); // focus
    if (c1 == EOF) { // EOF has been written to f2 and now loop needs to be stopped
      break;
    }
  }

  fclose(f1), fclose(f2);
} // DONE
