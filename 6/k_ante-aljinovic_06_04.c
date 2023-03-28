/******************************************************************************
4. Napisati funkciju koja računa sumu elemenata niza na neparnim mjestima u nizu

*******************************************************************************/

#include <stdio.h>

void funk(int* psuma, int* niz, int n)
{
    int i;
    *psuma=0;
    
    for(i=0;i<n;i++)
    {
        if(i%2 != 0)
            *psuma+= *(niz+i);
    }
}

int main()
{
    int niz[]={0,1,2,3,4,5};
    int n=sizeof(niz)/sizeof(niz[0]);
    int suma;
    
    funk(&suma,niz,n);
    
    printf("%d",suma);
    
}
