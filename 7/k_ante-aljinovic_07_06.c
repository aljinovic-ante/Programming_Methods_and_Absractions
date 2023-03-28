/******************************************************************************

6. Napisati funkciju koja za string oblika "DD.MM.YYYY" raèuna koliko osoba s tim datumom roðenja ima godina.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int funk(int d, int m, int g)
{
	int rez;

	if (m <= 5)
	{
		if (d < 10)
			rez = 2022 - g;
		else
			rez = 2021 - g;
	}
	else
		rez = 2021 - g;

	return rez;
}

int main()
{
	char datum[N];
	int d, m, g;


	printf("unesite datum:\n");
	gets(datum);

	sscanf_s(datum, "%d.%d.%d", &d, &m, &g);

	printf("ima %d godinu\n", funk(d, m, g));

	return 0;

}