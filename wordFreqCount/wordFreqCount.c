#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct WordFreq{
    char word[30];
    int count;
};

void normalizeWord(char *word)
{
    int i=0;
    for(i=0; word[i]!='\0'; i++)
    {
        if(word[i]<='Z' && word[i]>='A')  // make to lower case
        word[i]+=32;
    } 

    if(word[strlen(word)-1] >'z' || word[strlen(word)-1] <'A'){word[strlen(word)-1]='\0';} // removing punctuation marks from end.
}


int main()
{

    struct WordFreq words[100], result[100]; // result is for storing original words
    int wordCount=0;

    FILE *ptr=fopen("input.txt","r");

    char str[1001];

    int i=0;
    while(fscanf(ptr,"%c",&str[i])!=EOF){i++;}


    char *token= strtok(str," \n"); //the string will be split whenever a space or new line character is encountered.
    int got=0;

    while(token!=NULL)
    {
        char temp[31]; // storing words before normalizing
        strcpy(temp,token);
        normalizeWord(token); // make words in all small letter, better to compare

        for(i=0; i<wordCount; i++)
        {
            if(strcmp(words[i].word,token)==0)
            {
                got=1;
                words[i].count++;
                result[i].count++;
                break;
            }
        }
        if(got==0)
        {
            strcpy(words[i].word,token); // storing the normalized word for comparing 
            strcpy(result[i].word,temp); // storing the original Words for output
            words[i].count=1;
            result[i].count=1;
            wordCount++;
        }
        token = strtok(NULL, " \n");
        got=0;

    }

    for(i=0; i<wordCount; i++)
    {
        printf("%s : %d\n",result[i].word, result[i].count);
    }


}