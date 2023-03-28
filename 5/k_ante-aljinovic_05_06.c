#include <stdio.h>

unsigned funkcija(unsigned n)
{
  int i,k=0;
  int brojac=0;
  
  for(i= 8*sizeof(n)-1; i>=0 ;--i)
  {
    
    if(n&(1<<i))
    {
        k=1;
    }
    if(k!=1) brojac++;
  }

  return brojac;
}


int main()
{
    unsigned n=200;  
    printf("%u",funkcija(n));
    return 0;
}