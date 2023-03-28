/******************************************************************************

5. * Napisati funkciju koja prima string i jedan znak i modificira string tako da odbaci
sve znakove prije danog znaka.
Primjer: Za string "ONoffON" i znak o, modificirani string je "offON".

*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funk(char* str, char slovo)
{
	char* poz = strchr(str, slovo);

	str = strcpy(str,poz);
}

int main()
{
	char str[] = "ONoffON";
	char slovo = 'o';

	funk(str, slovo);
	puts(str);

	return 0;
}
