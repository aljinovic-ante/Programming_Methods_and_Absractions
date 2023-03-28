/*
3. Napisati rekurzivnu funkciju koja za dani broj n ispisuje sve neparne brojeve unazad
do 1.

*/
#include <stdio.h>

void funk(int n)
{	

	if (n % 2 != 0) printf("%d\n", n);

	if (n == 1) return 1;

	return funk(n - 1);
}

int main()
{
	int n = 15;
	funk(n);
	return 0;
}