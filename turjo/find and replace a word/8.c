#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    printf("Enter word  ");
    char trgt[100], buffer[1000], nw[10000] = "", replace[1222] = "froframminf";
    // gets(trgt);
    scanf("%s", trgt);
    int till = strlen(trgt);
    // puts(trgt)
    int pos = 0;

    while (fgets(buffer, 1000, fp) != NULL)
    {
        // puts(buffer);
        int ln = strlen(buffer);
        // printf("%d\t", ln);
        for (int i = 0; i <= ln - till; i++)
        {
            bool is = true;
            for (int j = i; j < i + till; j++)
            {
                if (buffer[j] != trgt[j - i])
                {
                    is = false;
                    break;
                }
            }
            if (is == true)
            {
                for (int j = i; j < i + till; j++)
                {
                    buffer[j] = replace[j - i];
                    // printf("%c", buffer[j]);
                    // printf("%c", trgt[j-i]);
                }
                printf("\n\n");
            }
        }

        strcat(nw, buffer);
    }
    fclose(fp);
    fp = fopen("file.txt", "w");
    puts(nw);
    fprintf(fp, "%s", nw);
    printf("finished");

    fclose(fp);
}