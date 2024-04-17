#include <stdio.h>
#include <string.h>
int main()
{
    // FILE *fp = fopen("File1.txt", "r");
    // char store[1000] = "", temp[1222];

    // while (fgets(temp, 122, fp) != NULL)
    // {
    //     // puts(temp);
    //     strcat(store, temp);
    // }
    // puts(store);
    FILE *file1 = fopen("File1.txt", "r");
    char store_file1[1000] = "", temp[1000];
    while (fgets(temp, 1000, file1) != NULL)
    {
        strcat(store_file1, temp);
    }
    FILE *file2 = fopen("File2.txt", "r");
    char store_file2[1000] = "";
    while (fgets(temp, 1000, file2) != NULL)
    {
        strcat(store_file2, temp);
    }
    if (strcmp(store_file1, store_file2) == 0)
    {
        printf("Files are equal");
    }
    else
        printf("Files aren't equal");
}