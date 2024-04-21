#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    FILE *fp = fopen("file.txt", "r");
    int chr = 0, words = 0, lines = 0;

    char buffer[1000];
    char *pch;
    while (fgets(buffer, 1000, fp) != NULL)
    {
        // puts(buffer);
        pch = strtok(buffer, " ");
        while (pch != NULL)
        {
            words++;
            pch = strtok(NULL, " ");
        }

        lines++;
    }
    fseek(fp, 0, SEEK_END);
    chr = ftell(fp);

    printf("total characters = %d\ntotal words = %d\ntotal lines =  %d", chr, words, lines);
    fclose(fp);
}