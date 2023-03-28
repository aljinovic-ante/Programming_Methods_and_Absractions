#include <stdio.h>
#include <math.h>

/*
2. * Napisati rekurzivnu funkciju koja ispituje je li prirodni broj palindrom.
*/

int funk(int n)
{
	int k = n;
	int brojac = 0;
	while (k)
	{
		k /= 10;
		brojac++;
	}

	if (n == 0) return 0;

	return funk(n / 10) + ((n % 10) * pow(10, brojac-1));
}

int main()
{
	int n = 241;
	printf("%d\n", funk(n));
	if (n == funk(n)) printf("palindrom je");
	else printf("nije");

	return 0;
}