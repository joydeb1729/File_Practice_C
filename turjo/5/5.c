#include <stdio.h>
#include <string.h>
int main()
{

    // char str[] = "this is a sentence\nnewline. also sentence";
    // char *pch;
    // pch = strtok(str, " ");
    // int cnt = 0;
    // while (pch != NULL)
    // {
    //     printf("%s\n", pch);
    //     pch = strtok(NULL, " ");
    //     printf("%d ", cnt++);
    // }

    FILE *fp = fopen("file.txt", "r");
    char to_remove[1000], buffer[1000], result[10000] = "", add[111];
    puts("word ?");
    gets(to_remove);

    while (fgets(buffer, 1000, fp) != NULL)
    {
        char *pch;
        pch = strtok(buffer, " ");
        while (pch != NULL)
        {
            if (strcmp(pch, to_remove) != 0)
            {
                strcpy(add, pch);
                strcat(add, " ");
                strcat(result, add);
                // strcat(result, " ");
            }
            pch = strtok(NULL, " ");
        }
        // strcat(result, "\n");
        int ln = strlen(result);
        result[ln - 1] = '\0';
    }
    fp = fopen("file.txt", "w");
    fputs(result, fp);

    fclose(fp);
}