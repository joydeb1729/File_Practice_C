/*
**file practice question**
@author_Durjay
solution by KAZI RIFAT MORSHED 230220

4. Write a C program to count characters, words and lines in a text file.

input->
I love   programming.
Working   with files in C programming is fun.
I am learning  C  programming   at KU.

Output->
Total characters = 106
Total words      = 18
Total lines      = 3
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  FILE *f1 = fopen("file4.txt", "r");
  if (f1 == NULL) {
    printf("ERROR OPENING FILE");
    exit(EXIT_FAILURE);
  }
  int char_count = 0, word_count = 0, line_count = 1, temp = 0; // set line count to 1

  // character counting
  fseek(f1, 0, SEEK_END);
  char_count = ftell(f1);
  rewind(f1);

  // char str[char_count + 1];
  char *str = (char *)malloc(sizeof(char) * (char_count + 1));

  char c;
  while ((c = fgetc(f1)) != EOF) {
    str[temp] = c;
    if (c == '\n') {
      line_count++;
    }
    temp++; // this variable is for looping
  }

  // word  count
  char *t = strtok(str, " .,/*-+;':\" {}()[]\\|`~!@#$\%^&*");
  while (t != NULL) {
    word_count++;
    t = strtok(NULL, " .,/*-+;':\" {}()[]\\|`~!@#$\%^&*");
  }

  // result
  printf("Total characters\t= %d\n"
         "Total words\t\t= %d\n"
         "Total lines\t\t= %d\n",
         char_count, word_count, line_count);
  fclose(f1);
} // DONE
