#include<stdio.h>
#include<string.h>

struct word{
    char word[50];
    int count;
}words[100];


int wordCount=0;

int vowelCount(char *word)
{
    int count=0;
    int i;
    for(i=0; i<strlen(word); i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
        count++;
    }
    return count;
}

int main()
{
    FILE *ptr=fopen("input.txt","r");

    char str[10001];


    int i=0;

    while(fscanf(ptr,"%c",&str[i])!=EOF){i++;}


    char *token=strtok(str," \n,.");

    while(token!=NULL)
    {
        char temp[50];

        strcpy(temp,token);

        int flag=0;
        for(i=0; i<wordCount; i++)
        {   
            
            if(strcmp(words[i].word,temp)==0)
            {
                flag=1;
                words[i].count++;
                break;
            }

        }
        if(flag==0)
        {
            strcpy(words[i].word,temp);
            words[i].count=1;
            wordCount++;
        }
        token=strtok(NULL," \n,.");
    }

    fclose(ptr);

    for(i=0; i<wordCount; i++)
    {
        printf("%s, vowel count = %d\n",words[i].word,vowelCount(words[i].word));
    }
    printf("\n---------------------------------\n");

    for(i=0; i<wordCount; i++)
    {
        int j;
        printf("%s: ", words[i].word);
        for(j=0; j<words[i].count; j++)
        {
            printf("*");
        }printf("\n");
    }


}