/******************************************************************************
2. Napisati funkciju koja ispituje da li su dvije rijeèi anagrami (jedna rijeè je permutirana
druga rijeè).
Primjer: rijeèi "vatra", "trava" i "vrata" su anagrami.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int funk(char* str1, char* str2)
{
	int i, j;
	char pom;

	for (i = 0; i < strlen(str1) - 1; i++)
	{
		for (j = i + 1; j < strlen(str1); j++)
		{
			if (str1[i] > str1[j])
			{
				pom = str1[i];
				str1[i] = str1[j];
				str1[j] = pom;
			}
		}
	}

	for (i = 0; i < strlen(str2) - 1; i++)
	{
		for (j = i + 1; j < strlen(str2); j++)
		{
			if (str2[i] > str2[j])
			{
				pom = str2[i];
				str2[i] = str2[j];
				str2[j] = pom;
			}
		}
	}

	if (strcmp(str1, str2))
		return 0;

	return 1;


}

int main()
{
	char str1[] = "vatra";
	char str2[] = "vrata";

	if (funk(str1, str2)) printf("anagram je");
	else printf("nije");

	return 0;
}