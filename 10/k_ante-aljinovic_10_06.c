#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
6. Napisati funkciju koja, koristeći funkciju bsearch traži postoji li unesena točka u nizu
točaka. Niz se prethodno sortira funkcijom qsort prema udaljenosti od ishodišta.
*/

typedef struct {
	int x, y;
}tocka;

int usporedba(const void* a, const void* b)
{
	tocka k1 = *(tocka*)a;
	tocka k2 = *(tocka*)b;
	float t1 = pow(pow(k1.x, 2) * pow(k1.y, 2), 0.5);
	float t2 = pow(pow(k2.x, 2) * pow(k2.y, 2), 0.5);
	if (t1 < t2) return -1;
	if (t1 == t2) return 0;
	return 1;
}

typedef struct {
	int x, y;
}tocka2;

int main()
{
	tocka niz[] = { {4,2},{2,1},{2,3} };
	tocka2 niz2[]={0};
	int i;

	qsort(niz, sizeof(niz) / sizeof(niz[0]), sizeof(tocka), usporedba);

	for (i = 0; i < (  sizeof(niz) / sizeof(niz[0])  ); i++)
	{
		printf("%d,%d\n", niz[i].x, niz[i].y);
	}

	printf("unesite x i y\n");
	scanf("%d %d", &niz2[0].x, &niz2[0].y);

	for (i = 0; i < (sizeof(niz2) / sizeof(niz2[0])); i++)
	{
		printf("%d,%d\n", niz2[i].x, niz2[i].y);
	}

	puts(bsearch(&niz2[0], niz, sizeof(niz) / sizeof(niz[0]), sizeof(tocka), usporedba)
		? "da" : "ne");

	return 0;
}
