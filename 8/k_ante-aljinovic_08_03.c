/*
3. Definirati strukturu razlomak, te napisati funkcije za 4 osnovne operacije sa razlomcima.
Napomena: razlomak koji funkcija vraća mora biti skraćen.
*/

#include <stdio.h>

typedef struct {
	int b, n;
}broj;

void funk6(int** pb, int** pn)
{
	int i;
	int max;
	if (**pb > **pn) max = **pb;
	else max = **pn;

	for (i = max; i > 0; i--)
	{
		if (**pb % i == 0 && **pn % i == 0)
		{
			**pb = (**pb / i);
			**pn = (**pn / i);
		}
	}
}


void funk(broj* raz_niz, int* pb, int* pn, char oper)
{

	if (oper == '*')
	{

		*pb = ((raz_niz[0].b) * (raz_niz[1].b));
		*pn = ((raz_niz[0].n) * (raz_niz[1].n));
	}
	if (oper == '/')
	{

		*pb = ((raz_niz[0].b) * (raz_niz[1].n));
		*pn = ((raz_niz[0].n) * (raz_niz[1].b));
	}
	if (oper == '+')
	{
	
		*pn = ((raz_niz[0].n) * (raz_niz[1].n));
		*pb = (((*pn / (raz_niz[0].n)) * (raz_niz[0].b)) + ((*pn / (raz_niz[1].n)) * (raz_niz[1].b)));
	}
	if (oper == '-')
	{
		
		*pn = ((raz_niz[0].n) * (raz_niz[1].n));
		*pb = (((*pn / (raz_niz[0].n)) * (raz_niz[0].b)) - ((*pn / (raz_niz[1].n)) * (raz_niz[1].b)));
	}


	printf("%d/%d\n", *pb,*pn);
	funk6(&pb, &pn);

}

int main()
{
	char oper;
	broj raz_niz[] = { {2,3} , {6,4} };
	int b, n;

	printf("koju operaciju zelite raditi?:");
	scanf(" %c", &oper);
	printf("%c\n", oper);
	funk(raz_niz, &b, &n, oper);

	printf("%d/%d", b, n);

}