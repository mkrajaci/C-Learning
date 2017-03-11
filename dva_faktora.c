/* 2014-04-14-kolokvij-1-jutarnji, 3. zadatak

U�itati jedan broj od korisnika, te ispisati bilo koja dva broja koja pomno�ena daju taj broj (ne ra�unaju�i 1 i njega samog).

Npr. za 24 ispis mo�e biti 2 i 12, 3 i 8 ili 4 i 6.

Potrebno je ispisati samo jedan par brojeva.

Ukoliko takav par brojeva ne postoji, ispisati pripadaju�u poruku. */

#include <stdio.h>

int main(void)
{
	int ucitani_broj, prvi_faktor, drugi_faktor = 0, brojac;

	printf("Molim unesite jedan broj: ");
	scanf_s("%d", &ucitani_broj);

	for (brojac = 2; brojac < ucitani_broj; brojac = brojac + 1)
	{
		if (ucitani_broj % brojac == 0)
		{
			prvi_faktor = ucitani_broj / brojac;
			drugi_faktor = brojac;		
		}
	}
	
	if(drugi_faktor != 0)
		printf("Prvi faktor je: %d a drugi faktor je %d", prvi_faktor, drugi_faktor);
	else printf("Nema faktora");
	
	getchar();
	getchar();

	return 0;
}