/*
**file practise question**
@author_Durjay
solution by KAZI RIFAT MORSHED 230220

2. Write a C program to compare two files.

input ->
File1.txt
Learn C programming at KU.
Working with files and directories.

File2.txt ->
Learn C programming at KU.
Working with chatgpt and copilot.

Output->
Files are not equal.
Line: 2, column: 14
*/

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main(void) {
  FILE *f1 = fopen("file2_1.txt", "r"), *f2 = fopen("file2_2.txt", "r");
  if (f1 == NULL || f2 == NULL) {
    printf("ERROR OPENING FILE");
    exit(EXIT_FAILURE);
  }

  int line_count = 1, column_count = 0, is_equal = true;
  char c1, c2;

  //// getting file length to allocate memory
  // fseek(f1, 0, SEEK_END);
  // f1_len = ftell(f1);
  // fseek(f2, 0, SEEK_END);
  // f2_len = ftell(f2);
  rewind(f1), rewind(f2);
  // char *str1 = (char *)malloc(sizeof(char) * (f1_len + 1));
  // char *str2 = (char *)malloc(sizeof(char) * (f2_len + 1));

  // comparing
  while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
    column_count++;
    if (c1 != c2) {
      is_equal = false;
      break;
    }
    if (c1 == '\n') {
      line_count++;
      column_count = 0;
    }
  }

  // printing result
  if (is_equal == true) {
    printf("Files are equal");
  } else {
    printf("Files are not equal"
           "\nLine: %d, column: %d",
           line_count, column_count);
  }

  // ending
  fclose(f1), fclose(f2);
} // DONE
