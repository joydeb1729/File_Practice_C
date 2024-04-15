#include <stdio.h>
#include<string.h>

void removeLine(char *str, int targetLine)
{
    int i=1;
    char *start=str;

    while(i<targetLine)
    {
        start=strchr(start,'\n');
        i++;
    }
    if(targetLine>1)
    start++; // point at the first of target line
    char *end=strchr(start,'\n');


    if(end==NULL){return;}//if target is last line, just return
    else{end++;} //if not, Move past the newline character

    memmove(start,end,strlen(end)+1); // remove all characters from start to end
}


int main()
{
    FILE *ptr=fopen("input.txt","r");

    char str[1001];
    int i=0, targetLine=0;

    while(fscanf(ptr,"%c",&str[i])!=EOF){i++;}
    fclose(ptr);

    printf("Enter the line you want to remove: ");
    scanf("%d",&targetLine);

    removeLine(str,targetLine);

    printf("After removing line %d :\n", targetLine);
    puts(str);

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