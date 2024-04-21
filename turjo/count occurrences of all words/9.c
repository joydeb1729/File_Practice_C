#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct my_store
{
    char *word;
    int cnt;
} my_store;

my_store list[1000];
int elements = 0;

void add(char *str)
{
    for (int i = 0; i < elements; i++)
    {
        if (strcmp(str, list[i].word) == 0)
        {
            list[i].cnt++;
            return;
        }
    }

    // list[elements] = (my_store *)malloc(sizeof(my_store));
    list[elements].word = malloc(strlen(str) + 1);
    strcpy(list[elements].word, str);
    list[elements].cnt = 1;

    elements++;
}
#define mx 1000
int main()
{
    FILE *fp = fopen("file.txt", "r");

    char buffer[mx];
    while (fgets(buffer, mx, fp) != NULL)
    {
        char *pch;
        pch = strtok(buffer, " .");
        while (pch != NULL)
        {
            if (strcmp(pch, " .") != 0 && strcmp(pch, "\n") != 0)
            {
                add(pch);
                // puts(pch);
            }
            pch = strtok(NULL, " .");
        }
    }

    for (int i = 0; i < elements; i++)
    {
        printf("%s-------------->%d\n\n", list[i].word, list[i].cnt);
    }

    fclose(fp);
}