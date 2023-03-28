#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
/*
6. * Napraviti datoteku u kojoj su u svakom redu 4 cijela broja. Napisati funkciju koja
?ita brojeve iz datoteke te vra?a informaciju u kojem redu se nalaze brojevi sa
najve?om prosje?nom vrijednoš?u.
*/
int funk(FILE* fp)
{
    float prosjek;
    int i = 0, maxpoz;
    int suma;
    int max = 0;
    int a, b, c, d;
    int poz;


    while (fscanf(fp, "%d %d %d %d", &a, &b, &c, &d) != EOF)
    {
        i++;
        suma = a + b + c + d;
        prosjek = (float)suma / 4;
        if (prosjek > max)
        {
            max = prosjek;
            poz = i;
        }
        suma = 0;
    }

    return poz;

}

int main()
{
    FILE* fp = fopen("test7.txt", "r");

    if (!fp)
    {
        perror("");
        return 0;
    }
    printf("najveca prosjecan vrijednost je u %d. redu", funk(fp));

    fclose(fp);

    return 0;
}