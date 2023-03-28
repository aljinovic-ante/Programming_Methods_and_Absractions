#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

/*
5. * Napisati funkciju koja za datoteku u kojoj je u svakom retku jedan broj i jedna
rije?, ispisuje na ekran rije? onoliko puta koliki je broj.
Primjer: Ako u datoteci piše:
4 psa
2 tigra
1 deva
ispisat ?e se
psapsapsapsa
tigratigra
deva

*/

void funk(FILE* fp)
{
    int n, i;
    char str[256];

    while (fscanf(fp, "%d %s", &n, str) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            printf("%s", str);
        }
        puts("");
    }
}

int main()
{
    FILE* fp = fopen("test6.txt", "r");

    funk(fp);

    fclose(fp);

    return 0;
}