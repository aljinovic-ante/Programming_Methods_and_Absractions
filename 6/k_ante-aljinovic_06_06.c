/*
6. * Napisati sve funkcije iz zadatka 3 koristeći adresnu aritmentiku.
*/

#include <stdio.h>

void ispisniza(int* niz,int* pn)
{
    int i;
    
    for(i=0;i<*pn;i++)
    {
        printf("%d. element niza je %d\n",i+1,*(niz+i));
    }
}


void unosniza(int* niz,int* pn)
{
    int i;
    
    for(i=0;i<*pn;i++)
    {
        printf("unesite %d. clan niza:\n",i+1);
        scanf("%d",niz+i);
    }

    
}

float prosjek(int* niz,int* pn)
{
    int suma=0;
    int i;
    float prosjek;
    for(i=0;i<*pn;i++)
    {
        suma+=*(niz+i);
    }
    
    prosjek = suma/ *pn;
    
    return prosjek;
}


int main()
{
    int n;
    int niz[n];
    
    printf("koliko elemenata niza zelite imati?\n");
    scanf("%d",&n);
    unosniza(niz,&n);
    ispisniza(niz,&n);
    
    printf("prosjek niza je %f", prosjek(niz,&n));
}
