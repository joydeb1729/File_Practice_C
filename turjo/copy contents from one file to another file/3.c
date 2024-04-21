#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
const int mx_size = 1e4;

int main()
{
    FILE *read_file = fopen("from_here.txt", "r");
    FILE *write_file = fopen("to_here.txt", "w");
    char buffer[mx_size];
    while (fgets(buffer, mx_size, read_file) != NULL)
    {
        fputs(buffer, write_file);
    }
    printf("Done");
    fclose(read_file);
    fclose(write_file);
}