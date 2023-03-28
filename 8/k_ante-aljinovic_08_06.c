/******************************************************************************
6. Napisati strukturu za RGB boju. Boja je zadana udjelom crvene, zelene i plave boje
(RGB) koje imaju vrijednosti od 0 do 255. Napisati stukturu za točku koja ima tri
koordinate (x,y,z) i RGB boju. Napisati funkciju koja za niz točaka vraća broj onih
kojima je crvena boja najzastupljenija.
*/
#include <stdio.h>

typedef struct {
    
    int r,g,b;
    
}RGB;


typedef struct
{
    
    double x,y,z;
    RGB boja;
    
}tocka;

int funk2(tocka* n)
{
    printf("%d\n",n->boja.r);
    if( ((n->boja.r)>(n->boja.g)) && ((n->boja.r)>(n->boja.b)) ) return 1;
    return 0;
}

int funk(tocka niz[],int n)
{
    int brojac=0,i;
    for(i=0;i<n;i++)
    {
        if(funk2(&niz[i]))
            brojac++;
    }
    
    return brojac;
}

int main()
{
    tocka niz[] = { {2,0,3,250,243,2},{-1,6,8,23,243,2},{5,-2,5,200,5,2} };
	int n = sizeof niz / sizeof niz[0];
    printf("%d",funk(niz,n));
    
    return 0;
}