#include <stdio.h>
int provjera(int br, int k, int n)
{
    if ((1<<k)&br)
        return 1;
    else
        return 0;
}

int set(int n, int k)
{
    int br;
    br = (1<<k)|n;
    if(provjera(br,k,n)) 
       return br;
    else 
      {
        printf("greska");
       return 0;
      }
}

int main()
{
    int n=200,k=2;
    printf("%d", set(n,k));
    return 0;
}