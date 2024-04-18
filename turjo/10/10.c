#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    char buffer[1000], store[10000];
    int index = 0;
    while (fgets(buffer, 1000, fp) != NULL)
    {
        int ln = strlen(buffer);
        for (int i = 0; i < ln; i++)
        {
            if (islower(buffer[i]))
            {
                store[index++] = toupper(buffer[i]);
            }
            else
                store[index++] = tolower(buffer[i]);
        }
    }
    fp = fopen("file.txt", "w");
    // puts(store);
    fputs(store, fp);
    fclose(fp);
}