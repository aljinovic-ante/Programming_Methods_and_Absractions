#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Napisati funkciju koja ?ita datoteku znak po znak, sprema u string znakove koji su
mala slova alfabeta i vra?a kreirani string. Memoriju za string alocirati na heapu.
*/

int funk2(char ch)
{

	if (ch >= 97 && ch <= 122)
		return 1;

	return 0;
}

char* funk(FILE* fp, int n)
{
	char* str = (char*)malloc(n * sizeof(char));
	char ch;

	int index = 0;
	while (ch = fgetc(fp))
	{
		if (ch == EOF) {
			break;
		}
		if (funk2(ch))
		{
			str[index] = ch;
			index++;
		}

	}
	str[index] = '\0';
	return str;
}

int main()
{

	int n;
	FILE* fp = fopen("test2.txt", "r");
	if (!fp)
	{
		printf("nevalja\n");
		return 0;
	}

	fseek(fp, -1, SEEK_END);
	n = ftell(fp);
	fseek(fp, 1, SEEK_SET);


	char* str;
	str = funk(fp, n);


	puts(str);
	free(str);
	fclose(fp);

	return 0;

}