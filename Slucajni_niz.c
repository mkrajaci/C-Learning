/*Deklarirati niz od 7 nepredznaèenih cijelih brojeva, te ga inicijalizirati sluèajnim brojevima u intervalu [1-39].
Vrijednosti u nizu se ne smiju ponavljati.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int niz[7];
	int *p;
	int brojac, broj;
	p = niz;
	srand(time(NULL));

	for (brojac = 0; brojac <= 7; ++brojac)
	{
		broj = rand() % 39;
		p = broj;
		printf("%d ", p);
	}
	getchar();
	getchar();
	return 0;
}