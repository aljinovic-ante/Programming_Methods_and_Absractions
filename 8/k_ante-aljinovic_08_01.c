/*
 1. Napisati funkciju koja za tri broja računa i vraća najveći i najmanji element. Za
računanje najvećeg i najmanjeg elementa napisati dvije predprocesorske direktive.
*/

#include <stdio.h>
#define MAX (  (a>b)? ((a>c)? a: ((b>c)? b:c) ) : (a<c)?(b<c)? c:b  :b   )
#define MIN (  (a<b)? ((a<c)? a: ((b<c)? b:c) ) : (a>c)?(b>c)? c:b  :b   )

int main()
{
	int a = 2,b=5,c=-1;
	printf("max je %d a min je %d", MAX,MIN);
	return 0;
}