#include <stdio.h>
#include<string.h>

int wordRemove(char *str, char *word)
{
    int len=strlen(word);
    if(strstr(str,word)==NULL)
    return 0;

    char *ptr=str;

    while((ptr=strstr(str,word))!=NULL)
    {
        memmove(ptr,ptr+len,strlen(ptr+len)+1); // in built method to remove word from a string
    }

    return 1;
}



int main()
{
    FILE *ptr;

    ptr=fopen("input.txt", "r");

    char str[1001];

    int i=0;
    while(fscanf(ptr,"%c",&str[i])!=EOF){i++;}

    fclose(ptr);

    char target[30];
    printf("Enter the word yoy want to remove: ");

    scanf("%s",target);

    
    printf("Before removing %s :\n", target);
    puts(str);

    if(wordRemove(str,target)==0)
    {
        printf("Word is not found!");
    }
    else
    {
        printf("After removing %s :\n", target);
        puts(str);
    }


    //if the change should be updated in file too
    /*
    FILE *temp=fopen("input.txt","w");
    int len=strlen(str);
    i=0;
    while(i<len)
    {
        fprintf(temp,"%c",str[i]);
        i++;
    }
    */
    return 0;
}