#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    int r = sqrt(x);

    for(int i = 2; i < r; i++)
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}



int main()
{
    FILE *ptr=NULL, *even=NULL, *odd=NULL, *prime=NULL;

    ptr = fopen("C:\\Users\\Durjay\\OneDrive\\Desktop\\test.txt", "r");
    even = fopen("even.txt","w"); 
    odd = fopen("odd.txt", "w");
    prime = fopen("prime.txt", "w");

    int temp_num;
    while(fscanf(ptr,"%d",&temp_num)!=EOF){
    // first argument is the steam, from where token will be read;
    // second argument: how (in which manner/style) each token will be read/taken from steam;
    // third argument: where (in which variable) to save this token;

        if(temp_num % 2 == 0)
            fprintf(even,"%d\n",temp_num);
        else
            fprintf(odd,"%d\n",temp_num);

        if(isPrime(temp_num))
            fprintf(prime,"%d\n",temp_num);

    }

    fclose(ptr), fclose(odd), fclose(even), fclose(prime);

    return 0;
}
