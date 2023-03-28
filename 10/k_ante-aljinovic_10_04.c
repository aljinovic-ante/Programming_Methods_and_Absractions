#include <stdio.h>

int funk(char str[],char slovo,int n)
{
	if (n == 0) return 0;
	int i = 0;
	int poz;

	while (str[i] != 0)
	{
		if (str[i] == slovo)
		{
			poz = funk(&str[i + 1], slovo, n - 1);
			if (poz < 0) return poz;
			return i + ((poz > 0) ? 1 : 0) + poz;
		}
		i++;
	}

	return -1;
}

int main()
{	//            01234
	char str[] = "abcad";
	int n = 2;
	int slovo = 'a';
	printf("pozicija je %d", funk(str, slovo, n));

	return 0;
}