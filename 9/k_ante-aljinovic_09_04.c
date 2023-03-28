#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Zadana je datoteka u kojoj se u svakom redu nalazi šest brojeva koji predstavljaju
koordinate trokuta u dvodimenzionalnom prostoru. Zapis je u obliku
(x1, y1), (x2, y2), (x3, y3).

Napisati strukturu trokut i funkciju koja brojeve iz datoteke zapisuje u niz struktura trokut. Otvaranje i zatvaranje
datoteke napisati van te funkcije.
Napisati funkciju koja niz struktura trokut zapisuje u binarnu datoteku.
*/

typedef struct {
    int x1, y1, x2, y2, x3, y3;
}trokut;

trokut* funk(FILE* fp,int* pk)
{
    int i=0;

    trokut* niz = (trokut*)malloc(256 * sizeof(int));

	while (fscanf(fp, "(%d, %d), (%d, %d), (%d, %d)\n", &niz[i].x1, &niz[i].y1, &niz[i].x2, &niz[i].y2, &niz[i].x3, &niz[i].y3) != EOF)
	{
		i++;
	}
	*pk = i;

    return niz;
}

int main()
{
    FILE* fp = fopen("test5.txt", "r");
    trokut* niz;
	int k;

    if (!fp)
        return 1;



    niz = funk(fp,&k);

    for (int i = 0; i < k; i++)
        printf("(%d,%d),(%d,%d),(%d,%d)\n", niz[i].x1, niz[i].y1, niz[i].x2, niz[i].y2, niz[i].x3, niz[i].y3);

    fclose(fp);
	free(niz);
    return 0;
}