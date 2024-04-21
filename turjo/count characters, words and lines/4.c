#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    FILE *fp = fopen("file.txt", "r");
    int chr = 0, words = 0, lines = 0;

    char buffer[1000];
    while (fgets(buffer, 1000, fp) != NULL)
    {
        // puts(buffer);
        int len = strlen(buffer);
        for (int i = 0; i < len;)
        {

            // printf("%c", buffer[i]);
            bool is = false;
            while (buffer[i] == ' ' || buffer[i] == '\n')
            {
                i++;
                is = true;
            }
            if (is)
                words++;
            else
                i++;
        }

        chr += len;
        lines++;
    }
    if (chr > 0)
        words++;
    printf("total characters = %d\ntotal words = %d\ntotal lines =  %d", chr, words, lines);
    fclose(fp);
}