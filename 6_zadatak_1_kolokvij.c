/*Ekvilibrij niza je svaki onaj indeks N koji dijeli niz u dvije polovice (od indeksa 0 do N - 1
odnosno od indeksa N + 1 do kraja niza) èije su sume èlanova identiène. Npr., u nizu
0 -3 5 -4 -2 3 1 0
ekvilibriji se nalaze na indeksima 0, 3 i 7 (primjetite da ekvilibriji mogu biti i na prvom i na zadnjem
indeksu ukoliko ostatak niza kao sumu daje 0).
Napišite funkciju koja primi jedan niz nepredznaèenih cijelih brojeva i jedan indeks, te vrati 1 ukoliko je
taj indeks ekvilibrij niza, a 0 inaèe.*/
#include <stdio.h>
int ekvilibrij_niza(int *niz, int duzina, int index);
int main(void)
{
	int niz[] = { 0, -3, 5, -4, -2, 3, 1, 0 };
	int duljina;
	duljina = sizeof(niz) / sizeof(niz[0]);
	printf("%d", ekvilibrij_niza(niz, duljina, niz + 5));
	getchar();
	getchar();
	return 0;
}
int ekvilibrij_niza(int *niz, int duzina, int *index)
{
	int suma_prije = 0, suma_poslije = 0, brojac;
	for (brojac = 0; brojac < index; ++brojac)
	{
		suma_prije += niz[brojac];
	}
	for (brojac = index + 1; brojac < niz[duzina - 1]; ++brojac)
	{
		suma_poslije += niz[brojac];
	}

	if (suma_prije == suma_poslije)
		return 1;
	else return 0;
}