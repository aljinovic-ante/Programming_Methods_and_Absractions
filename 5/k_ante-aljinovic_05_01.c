#include <stdio.h>

int funkcija(int a,int b, int c)
{
    int min;
    min= (  (a<b)? ((a<c)? a: ((b<c)? b:c) ) : (a>c)?(b>c)? c:b  :b   );
    
    return min;
    
}

int main()
{
    int a=1293, b=-13, c=388;
    printf("najmanji broj je %d",funkcija(a,b,c));
    return 0;
}
