#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
/*
1. Napisati funkciju koja ?e otvoriti postoje?u datoteku i izra?unati njezinu veli?inu u
bajtovima.
*/
int main()
{
	char ch;

	FILE* fp = fopen("test1.txt", "r");
	if (!fp)
		return 1;

	while ((ch = fgetc(fp)) != EOF)
		continue;

	printf("%ld\n", ftell(fp));

	fclose(fp);

	return 0;
}