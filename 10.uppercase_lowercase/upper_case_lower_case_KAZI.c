/*
10. Write a C program to convert uppercase to lowercase character and vice versa
in a text file.

file.txt
I love programming.
---------PROGRAMMING IN C---------
Learning C programming at KU is simple and easy.

output->
i LOVE PROGRAMMING.
---------programming in c---------
lEARNING c PROGRAMMING AT ku IS SIMPLE AND EASY.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  FILE *f_read = fopen("file10.txt", "r"),
       *f_write = fopen("file10_output.txt", "w+");

  char c, str[1000];
  int i = 0;

  while ((c = fgetc(f_read)) != EOF) {
// for (int i = 0;((c = fgetc(f_read)) != EOF); i++ ){
    if (isupper(c)) {
      c = tolower(c);
    } else {
      c = toupper(c);
    }
    str[i] = c;
    i++;
  }

  fclose(f_read);

  fprintf(f_write, "%s", str);
  //
  fclose(f_write);
} // PSUDO DONE
