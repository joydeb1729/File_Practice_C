#include <stdio.h>

int main() {
    FILE *ptr = NULL;
    ptr = fopen("input.txt", "r");

    if (ptr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char str[200];
    int i = 0;

    while (fscanf(ptr, "%c", &str[i]) != EOF && i < 199) {
        i++;
    }
    str[i] = '\0';

    int length = i;
    int lineCount=1;
    int wordCount=0;


    for(i=0; i<length; i++)
    {
        if(str[i]=='\n')
        lineCount++;

        if((str[i]!=' ' && str[i]!='\n') && (str[i+1]==' ' || str[i+1]=='\n' || str[i+1]=='\0'))
        wordCount++;
    }

    printf("Total character: %d\nTotal words: %d\nTotal line: %d\n", length, wordCount, lineCount);

    fclose(ptr);


    return 0;
}
