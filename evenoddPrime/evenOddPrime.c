#include <stdio.h>
#include <math.h>

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
    even = fopen("even.txt","w"); // using appending mode may cause confusion if the program is run muntiple times by user
    odd = fopen("odd.txt", "w");
    prime = fopen("prime.txt", "w");

    int _input;
    while(fscanf(ptr,"%d",&_input)!=EOF){ 
    // first argument is the steam, from where token will be read;
    // second argument: how (in which manner/style) each token will be read/taken from steam;
    // third argument: where to save this token;

        if(_input % 2 == 0 )
        fprintf(even,"%d\n",_input);
        else
        fprintf(odd,"%d\n",_input);

        if(isPrime(_input))
        fprintf(prime,"%d\n",_input);

    }

    fclose(ptr), fclose(odd), fclose(even), fclose(prime);

    return 0;
}
