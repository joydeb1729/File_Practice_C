#include<stdio.h>
#include<string.h>

void replaceWord(char *str, char *oldWord, char *newWord)
{
    int len=strlen(str);
    char *got, temp[10001];

    while((got=strstr(str,oldWord))!=NULL)
    {
        int index=got-str; //index of the words first letter
        strcpy(temp,str+index+strlen(oldWord)); // containing remaining string after the oldWord
        str[index]='\0';   //containing string till the occurrence of the oldWord
        strcat(str,newWord); // adding new word
        strcat(str,temp);  //adding remaining string
    }

}


int main()
{

    FILE *ptr=fopen("input.txt", "r");

    char str[10001];
    int i=0;
    while(fscanf(ptr,"%c",&str[i])!=EOF){i++;}

    char oldWord[31], newWord[31];

    printf("Initial Text: \n");
    puts(str);


    printf("\nPlease Enter the word you want to replace: ");
    scanf("%s",oldWord);

    printf("Please Enter the word you want to add: ");
    scanf("%s",newWord); 

    if(strstr(str,oldWord)==0)
    {
        printf("Word not found!");
        return 0;
    }

    replaceWord(str,oldWord,newWord);

    printf("After replacing %s with %s: \n", oldWord, newWord);

    puts(str);
 

    return 0;
}


