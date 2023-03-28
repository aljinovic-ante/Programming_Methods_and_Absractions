/*
1. Korisnik unosi dva prirodna broja m i n u main funkciji. Napisati funkciju koja prvi
broj prepolovi ako je paran (m/2), a drugi pomnoži sa 3 i doda mu jedan (3*n+1). U
main funkciji nakon poziva funkcije ispisati nove vrijednosti m i n.

*/

#include <stdio.h>

int funk(int* x, int* y)
{
    if(*x%2==0)
        *x=*x/2;
    
    if(*y%2==0)
        *y=(*y * 3 + 1);
}

int main()
{
    int m,n;
    printf("unesi m i n:\n");
    scanf("%d %d",&m,&n);
    funk(&m,&n);
    printf("m=%d, n=%d",m,n);
}