/******************************************************************************
3. Napisati funkciju koja modificira string tako da izbaci sve samoglasnike iz njega.
Primjer: "Popokatepetl" postaje "Ppktptl".
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void funk(char* str)
{
	char* poz = str;
	char* kraj;

	while (*poz)
	{
		if (*poz == 'a' || *poz == 'e' || *poz == 'i' || *poz == 'o' || *poz == 'u' || *poz == 'A' || *poz == 'E' || *poz == 'I' || *poz == 'O' || *poz == 'u')
		{
			kraj = str + strlen(str);
			memmove(poz, poz + 1, kraj - poz);

		}
		else
			poz++;
	}
}

int main()
{
	char str[] = "Popokatepetl";
	puts(str);
	funk(str);
	puts(str);

	return 0;
}
