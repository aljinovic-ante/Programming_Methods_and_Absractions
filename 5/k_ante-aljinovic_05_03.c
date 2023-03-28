
#include <stdio.h>

void funkcija(int n)
{
  int i,k=0;
  
  for(i= 8*sizeof(n)-1; i>=0 ;--i)
    if(n&(1<<i))
    {
        printf("1");
        k=1;
    }
    else if(k)
        printf("0");

  printf("\n");
}



int main()
{
    int n=10;   //00000000000000000000000000001010
    funkcija(n);
    return 0;
}