#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

/*
3. Napisati funkciju koja ?ita datoteku red po red, izbaci sve znakove interpunkcije,
praznine i prazne redove i tako izmjenjeni tekst zapiše u drugu datoteku. U main
funkciji korisnik unosi imena obiju datoteka.
*/

void funk2(char* str)
{
    char* p = str;

    while (*p)
    {
        printf("%c ", *p);
        if (*p == ' ' || *p == '.' || *p == '?' || *p == '!' || *p == '\n' || *p == ':' || *p == ',')
            memmove(p, p + 1, str + strlen(str) - p);
        else
            p++;
    }
}

void funk(FILE* fp1, FILE* fp2)
{
    char str[N];

    while ((fgets(str, N, fp1)) != NULL)
    {
        funk2(str);
        fputs(str, fp2);
    }
}

int main()
{
    char d1[256], d2[256];
    scanf("%s", &d1);
    scanf("%s", &d2);

    FILE* fp1 = fopen(d1, "r");
    FILE* fp2 = fopen(d2, "w");

    if (!fp1) return 1;
    if (!fp2)
    {
        fclose(fp1);
        return 2;
    }

    funk(fp1, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;

}