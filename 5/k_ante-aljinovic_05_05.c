#include <stdio.h>

int funk(int n, int k)
{
    int p,kr;
    switch(k)
    {
        case 1: p=7; kr=0;break;
        case 2: p=15; kr=8;break;
        case 3: p=23; kr=16;break;
        case 4: p=31; kr=24;break;
    }
    
    printf("%d %d\n",p,kr);
    
    for(p;p>=kr;--p)
        {
          n|=(1<<p);      /// 00000000 11001000
        }                 /// 1
                          /// 11111111 11001000
    
    return n;
}

int main()
{
    int n=200;
    int k=2;
    printf("%d",funk(n,k));
    return 0;
}