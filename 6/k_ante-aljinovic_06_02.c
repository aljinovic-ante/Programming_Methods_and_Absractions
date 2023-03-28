/*
2. Napisati funkciju koja računa sumu i produkt znamenki prirodnog broja.

*/

#include <stdio.h>


void funk(int n, int* sum, int* pro)
{
    *sum=0;
    *pro=1;
    while(n)
    {
        *sum=*sum+(n%10);
        *pro=*pro * (n%10);
        n/=10;
    }
}



int main()
{
    int n=1234, suma, produkt;
    
    funk(n,&suma,&produkt);
    
    printf("suma je %d a produkt je %d",suma,produkt);
    
    return 0;
    
}