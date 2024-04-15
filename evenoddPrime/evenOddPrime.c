#include <stdio.h>
#include<math.h>


int isPrime(int x)
{
    int r=sqrt(x);

    for(int i=2; i<r; i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}



int main()
{
    
    FILE *ptr=NULL, *even=NULL, *odd=NULL, *prime=NULL;

    ptr = fopen("C:\\Users\\Durjay\\OneDrive\\Desktop\\test.txt", "r");
    even= fopen("even.txt","a");
    odd= fopen("odd.txt", "a");
    prime= fopen("prime.txt", "a");

    int arr[100];
    int i=0;

    while(fscanf(ptr,"%d",&arr[i])!=EOF){i++;}

    int length=i;

    for(i=0; i<length; i++)
    {
        if(arr[i]%2)
        fprintf(odd,"%d\n",arr[i]);
        else
        fprintf(even,"%d\n",arr[i]);

        if(isPrime(arr[i]))
        fprintf(prime,"%d\n",arr[i]);
    }

    fclose(ptr);
    fclose(odd);
    fclose(even);
    fclose(prime);

    return 0;
}