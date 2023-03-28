/*
 1. Napisati funkciju koja rekurzivno računa sumu prvih n brojeva djeljivih sa m.
*/
#include <stdio.h>

int funk(int n, int m)
{
	if (n == 0) return 0;

	if (n % m == 0) n = n + funk(n - 1,m);
	else
		return funk(n - 1,m);
}

int main()
{
	int n = 10;
	int m = 3;
	printf("suma je %d", funk(n, m));

	return 0;
}