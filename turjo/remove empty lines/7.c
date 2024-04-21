#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("file.txt", "r");
    char save[10000] = "", temp[1000], compare[] = "\n";
    while (fgets(temp, 1000, fp) != NULL)
    {
        // puts(temp);
        if (strcmp(temp, compare) != 0)
        {
            strcat(save, temp);
        }
    }

    // puts(save);
    fp = fopen("file.txt", "w");
    fputs(save, fp);
    // fprintf(fp, "%s", save);
    fclose(fp);
}