#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    char to_remove[1222], buffer[1000], store[10000] = "";
    fgets(to_remove, 100, stdin);

    while (fgets(buffer, 1000, fp) != NULL)
    {

        if (strcmp(buffer, to_remove) == 0)
        {
            printf("\n\n");
            strcpy(buffer, "");
        }
        strcat(store, buffer);
    }
    fclose(fp);
    fp = fopen("file.txt", "w");
    puts(store);
    fputs(store, fp);

    printf("finished");
    fclose(fp);
}