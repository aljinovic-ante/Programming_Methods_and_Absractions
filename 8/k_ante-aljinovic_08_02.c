/*
2. Napisati strukturu kvadar. Napisati funkciju koja računa oplošje i volumen kvadra.
Za računanje oplošja i volumena kvadra napisati predprocesorsku direktivu.
*/

#include <stdio.h>
#define OPLOSJE (2*(x.a*x.b + x.b*x.c + x.a*x.c))
#define VOLUMEN (x.a * x.b * x.c)


struct kvadar {
	int a,b,c;
};

int main()
{
	struct kvadar x = { 2,3,4 };
	printf("%d %d", VOLUMEN, OPLOSJE);
}