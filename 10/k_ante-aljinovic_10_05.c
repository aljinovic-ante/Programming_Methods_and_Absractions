#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



/*
5. * Napisati funkcije sa istim prototipom: unesi_niz, ispisi_niz, sortiraj_niz_uzlazno,
sortiraj_niz_silazno za unos, ispis i sortiranje niza podataka tipa struct ucenik.
Sortiranje izvesti funkcijom qsort. Učenike možete čitati iz datoteke.
*/

typedef struct {
	char ime[256];
	char prezime[256];
}ucenik;

ucenik* unesi_niz(FILE* fp, int* br, int n)
{
	ucenik* niz = (ucenik*)malloc(n * sizeof(char));
	int i = 0;

	while (fscanf(fp, "%s %s\n", &niz[i].ime, &niz[i].prezime) != EOF)
	{
		i++;
	}

	*br = i;
	return niz;
}

void ispisi_niz(ucenik* niz, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d. %s %s\n", i+1, niz[i].ime, niz[i].prezime);
	}
	printf("\n");

}

int usporedba(const void* a, const void* b)
{
	ucenik* k1 = (ucenik*)a;
	ucenik* k2 = (ucenik*)b;

	return strcmp(k1->prezime, k2->prezime);
}

int usporedba2(const void* a, const void* b)
{
	ucenik* k1 = (ucenik*)a;
	ucenik* k2 = (ucenik*)b;

	return -(strcmp(k1->prezime, k2->prezime));
}

void sortiraj_niz_uzlazno(ucenik* niz, int n)
{
	qsort(niz, n, sizeof(ucenik), usporedba);
}

void sortiraj_niz_silazno(ucenik* niz, int n)
{
	qsort(niz, n, sizeof(ucenik), usporedba2);
}

int main()
{
	FILE* fp = fopen("10.txt", "r");

	if (!fp)
	{
		perror("");
		return 0;
	}

	fseek(fp, -1, SEEK_END);
	int n = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	int br = 0;
	ucenik* niz;

	niz = unesi_niz(fp, &br, n);

	sortiraj_niz_uzlazno(niz, br);

	ispisi_niz(niz, br);

	sortiraj_niz_silazno(niz, br);

	ispisi_niz(niz, br);

	fclose(fp);
	free(niz);
	return 0;
}