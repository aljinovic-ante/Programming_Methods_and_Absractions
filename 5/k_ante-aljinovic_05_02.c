#include <stdio.h>

int funkcija(int  a,int b)
{
    int raz;
    raz = (a>=b) ? a-b : a+b ;
    return raz;
}


int main()
{
    int a=116, b=83;
    printf("rezultat je %d", funkcija(a,b));   
    return 0;
}