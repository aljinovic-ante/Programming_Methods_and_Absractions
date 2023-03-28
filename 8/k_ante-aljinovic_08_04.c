/*
4. Definirati strukturu za vrijeme. Napisati funkciju koja prima dva argumenta koja
predstavljaju vrijeme i vraća razliku vremena. Ispišite tu razliku u formatu hh:mm:ss.
*/


#include <stdio.h>

typedef struct {
	int h, m, s;
}vrijeme;

int funk2(vrijeme* n)
{
	return (n->h * 3600 + n->m * 60 + n->s);
}

void funk(vrijeme* niz,int* sat,int* min,int* sek)
{
	int prvi = funk2(&niz[0]);
	int drugi= funk2(&niz[1]);
	int razlika = abs(prvi - drugi);

	*sat = (razlika / 3600);

	*min = (razlika - (3600 * *sat)) / 60;

	*sek = (razlika - (3600 * *sat) - (*min * 60));


}

int main()
{
	vrijeme niz[] = { {1,15,17},{0,53,45} };
	int sat, min, sek;

	funk(niz,&sat, &min, &sek);

	printf("%d:%d:%d", sat, min, sek);
	return 0;
}