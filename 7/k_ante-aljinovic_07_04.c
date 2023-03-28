#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/******************************************************************************
4. Napisati funkciju koja za neki string vra?a poziciju i adresu drugog pojavljivanja
nekog slova. U slu?aju da se slovo ne pojavljuje dva puta, funkcija vra?a -1 i NULL.
Primjer: Za string "ONoffON" pozicija drugog pojavljivanja slova 'O' je 6.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funk(char* str, char slovo, int* ppoz, int* padr)
{
	int i, j;
	*ppoz = -1;

	for (i = 0; i < strlen(str) - 1; i++)
	{
		for (j = i + 1; j < strlen(str); j++)
		{
			if (str[i] == slovo && str[i] == str[j])
			{
				*ppoz = j + 1;
				*padr = &str[j];
				break;
			}
		}
		if (*ppoz != -1) break;
	}
}

int main()
{
	char str[] = "ONoffON";
	char slovo = 'f';
	int poz;
	int *adr;

	funk(str, slovo, &poz, &adr);

	printf("Pozicija je %d. a adresa je %p", poz, adr);

	return 0;
}