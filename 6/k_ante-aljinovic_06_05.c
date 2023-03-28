/*
5. Napisati program u kojem korisnik unosi broj članova niza (broj manji od N) i sami
niz. Za niz alocirati N = 100 memorijskih lokacija. Nakon toga unosi dva broja m i
n koji su manji od broja članova niza. Napisati funkciju koja računa sumu i produkt
elemenata niza između m-tog i n-tog člana.
*/

#include <stdio.h>
#define N 100

void funk(int* psuma,int* pprodukt,int niz[],int n,int x,int y)
{
    *psuma=0;
    *pprodukt=1;
    for(x;x<y;x++)
    {
        *psuma+=niz[x];
        *pprodukt*=niz[x];
    }
}

int main()
{
    int n;
    int i;
    int x,y;
    int suma,produkt;
    
    do{
       printf("unesite broj clanova niza\n");
       scanf("%d",&n);
    }while(n>=N);
    
    int niz[n];
    
    for(i=0;i<n;i++)
    {
        printf("unesite %d. clan niza\n",i+1);
        scanf("%d",&niz[i]);
    }
    
    do{
        printf("unesite x i y\n");
        scanf("%d %d",&x,&y);
    }while(x>=n && y>=n);
    
    x=x-1;
    y=y-1;
    
    funk(&suma,&produkt,niz,n,x,y);
    
    printf("suma je %d a produkt %d",suma,produkt);
}