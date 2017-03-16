/*Napisati funkciju koja kao argument prima prirodan pozitivan broj i ispisuje sve proste faktore tog broja na zaslon.
Funkcija vraæa broj ispisanih faktora i ima prototip:
int prostiFaktori(int n); Npr. za broj 12 funkcija treba ispisati 2 2 3 i vratiti broj 3.
U glavnom programu korisniku omoguæiti unos brojeva sve dok ne unese 0. 
Ukoliko unese negativan broj ispisati poruku o nepodržanoj operaciji i omoguæiti ponovni unos.*/

#include <stdio.h>

int main(void)
{
	int uneseni_broj, brojac, ponavljanja = 0;
	printf("Molim unesite jedan broj:\n");
	scanf_s("%d", &uneseni_broj);

	for (brojac = 2; brojac < uneseni_broj; brojac = brojac + 1)
	{
		if (uneseni_broj % brojac == 0)
		{
			
			printf("%d\n", brojac);
			ponavljanja = ponavljanja + 1;
		
		}
		
	}
	printf("%d", ponavljanja);

	getchar();
	getchar();

	return 0;
}