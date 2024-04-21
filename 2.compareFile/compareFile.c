#include<stdio.h>
int main()
{
    FILE *f1, *f2 ;

    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");

    char str1[1001], str2[1001];

    int i=0;
    while(fscanf(f1,"%c",&str1[i])!=EOF){i++;};
    str1[i]='\0';
    int length1=i;
    i=0;
    while(fscanf(f2,"%c",&str2[i])!=EOF){i++;};
    str2[i]='\0';
    int length2=i;

    int length=(length1>length2)?length1:length2;

    int lineCount=1;
    int columnCount=1;
    for(i=0; i<length; i++)
    {
        if(str1[i]!=str2[i]){
        printf("Files are not equal.\nLine: %d, column: %d\n", lineCount, columnCount);
        fclose(f1);
        fclose(f2);
        return 0;
        }
        
        if(str2[i]=='\n'){lineCount++;columnCount=1;}

        if(str2[i]!='\n'){columnCount++;}
    }

    printf("Files are equal.\n");

    fclose(f1);
    fclose(f2);
    
    return 0;

}