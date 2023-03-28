/*
3. Napisati funkciju koja vraća prosječnu vrijednost elemenata niza. Unos i ispis niza
realizirati pomoću dvije odvojene funkcije.

*/

#include <stdio.h>

void ispisniza(int niz[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d. element niza je %d\n",i+1,niz[i]);
    }
}


void unosniza(int niz[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("unesite %d. clan niza:\n",i+1);
        scanf("%d",&niz[i]);
    }

    
}

float prosjek(int niz[],int n)
{
    int suma=0;
    int i;
    float prosjek;
    for(i=0;i<n;i++)
    {
        suma+=niz[i];
    }
    
    prosjek= suma/n;

    return prosjek;
}


int main()
{
    int n;
    int niz[n];
    
    printf("koliko elemenata niza zelite imati?\n");
    scanf("%d",&n);
    unosniza(niz,n);
    ispisniza(niz,n);
    
    printf("prosjek niza je %f", prosjek(niz,n));
}