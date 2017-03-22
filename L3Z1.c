/*Napisati funkciju koja kao argument prima prirodan pozitivan broj i ispisuje sve proste faktore tog broja na zaslon.
Funkcija vraæa broj ispisanih faktora i ima prototip:
int prostiFaktori(int n); Npr. za broj 12 funkcija treba ispisati 2 2 3 i vratiti broj 3.
U glavnom programu korisniku omoguæiti unos brojeva sve dok ne unese 0. 
Ukoliko unese negativan broj ispisati poruku o nepodržanoj operaciji i omoguæiti ponovni unos.*/

#include <stdio.h>

int prostiFaktori(int n)
{
	int broj_prostih, brojac, brojac_drugi, ponavljanja;
	for (broj_prostih = 0, brojac = 2; brojac > 1; brojac = brojac + 1)
	{
		if (n % brojac == 0)
		{
			printf("%d\n", brojac);
			n = n / brojac;
			broj_prostih = broj_prostih + 1;
			--brojac;
		}
	}
	return broj_prostih;
}



int main(void)
{
	int uneseni_broj, brojac=0, ponavljanja = 0, brojac_drugi=0, n=0;
	printf("Molim unesite jedan broj:\n");
	scanf_s("%d", &uneseni_broj);

	

		printf("%d", prostiFaktori(uneseni_broj));


	getchar();
	getchar();

	return 0;
}