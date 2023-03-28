#include <stdio.h>

int main()
{
	int a, b;
	char znak;
	int ost;
	int cjdj;

	printf("unesite dva broja i jedan znak:\n");
	scanf_s("%d %d %c", &a, &b, &znak);

	if (b == 0)
	{
		printf("zabranjeno je dijeliti nulom\n");
		return 0;
	}

	switch (znak)
	{
		case '+': printf("%d", a + b); break;
		case '-': printf("%d", a - b); break;
		case '*': printf("%d", a * b); break;
		case '/': ost = a % b; cjdj = a/b; printf("%d i ostatak %d", cjdj, ost); break;
		default: printf("greska u unosu"); break;
	}

	return 0;
		
}