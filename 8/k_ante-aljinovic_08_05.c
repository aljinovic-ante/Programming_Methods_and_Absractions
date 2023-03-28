#define _CRT_SECURE_NO_WARNINGS
/*
5. Definirati strukturu student koja se sastoji od imena i prezimena, JMBAG, grupe i
rezultata na kolokviju. Napisati funkciju koja će iz niza studenata vratiti niz onih
studenata koji su prošli kolokvij (tj. imali preko 40%)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char ime[256];
	char prezime[256];
	char jmbag[12];
	char grupa[1];
	int rezultat;
}student;

int funk2(student* n)
{
	if ((n->rezultat) >= 40) return 1;

	return 0;
}

student * funk(student niz[],int n,int* pk)
{
    
    int i,k=0;
    
    student* niz2=(student*)malloc(n*sizeof(student));
    
    for(i=0;i<n;i++)
    {
        if (funk2(&niz[i]))
		{
			strcpy(niz2[k].ime,niz[i].ime);
			strcpy(niz2[k].prezime,niz[i].prezime);
			strcpy(niz2[k].jmbag,niz[i].jmbag);
			strcpy(niz2[k].grupa,niz[i].grupa);
			niz2[k].rezultat=niz[i].rezultat;
			k++;
		}
    }
    
    *pk=k;
  
    return niz2;
}

int main()
{
	student niz[] = { {"Marko","Markic","111","A",100},{"Juro","Juric","222","B",30} ,{"Jerko","Jerkic","333","C",55} };
	int n = sizeof niz / sizeof niz[0];
	int k=0;
	student *nn;
	int i;
	nn=funk(niz,n,&k);
	
	for(i=0;i<k;i++)
	{
	    printf("%s %s %s %s %d\n",nn[i].ime,nn[i].prezime,nn[i].jmbag,nn[i].grupa,nn[i].rezultat);
	}
	
	free(nn);
	return 0;
}