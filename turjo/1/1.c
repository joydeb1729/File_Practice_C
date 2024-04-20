#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isPrime(int n)
{
    n = abs(n);
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    FILE *fp = fopen("input.txt", "r");
    FILE *evn = fopen("even.txt", "w"), *odd = fopen("odd.txt", "w"), *prime = fopen("prime.txt", "w");
    int store;
    while (fscanf(fp, "%d", &store) == 1)
    {
        if (store & 1)
        {
            fprintf(odd, "%d\n", store);
        }
        else
        {
            fprintf(evn, "%d\n", store);
        }
        if (isPrime(store))
        {
            fprintf(prime, "%d\n", store);
        }
    }
    printf("done");
    fclose(fp);
}