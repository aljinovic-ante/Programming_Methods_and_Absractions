/******************************************************************************
1. * Napisati funkciju koja izmeðu dva niza umetne treæi èiju duljinu i vrijednosti unosi
korisnik. Funkcija vraæa novonastali niz (i njegovu duljinu). Za alokaciju novonastalog
niza koristiti dinamièku alokaciju.
Primjer: Za nizove [1, 2, 3] i [4, 5, 6] i treæi niz duljine n = 4 i vrijednosti niza
[11, 12, 13, 14], novi niz ima elemente [1, 2, 3, 11, 12, 13, 14, 4, 5, 6]
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define N 100

int* funk(int dd, int da, int db, int dc, int a[], int b[], int c[])
{
	int i;

	int* niz = (int*)malloc(dd * sizeof(int));


	for (i = 0; i < da; i++)
	{
		niz[i] = a[i];
	}

	for (i = 0; i < dc; i++)
	{
		niz[da + i] = c[i];
	}

	for (i = 0; i < da; i++)
	{
		niz[da + dc + i] = b[i];
	}

	return niz;

}

int main()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int da = sizeof(a) / sizeof(a[0]);
	int db = sizeof(b) / sizeof(b[0]);
	int c[N];
	int dc, i;

	printf("unesite duljinu 3. niza:\n");
	scanf_s("%d", &dc);

	for (i = 0; i < dc; i++)
	{
		printf("unesite %d. clan niza:\n", i + 1);
		scanf_s("%d", &c[i]);
	}

	int dd = dc + da + db;

	int* d = funk(dd, da, db, dc, a, b, c);

	for (i = 0; i < dd; i++)
	{
		printf("%d. clan niza je %d.\n", i + 1, d[i]);
	}

	free(d);
	return 0;
}