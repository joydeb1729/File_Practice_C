#include <stdio.h>
int main()
{
    FILE *read_file = fopen("from_here.txt", "r");
    FILE *write_file = fopen("to_here.txt", "w");
    char buffer[1000];
    while (fgets(buffer, 1000, read_file) != NULL)
    {
        fputs(buffer, write_file);
    }
    printf("Done");
    fclose(read_file);
    fclose(write_file);
}