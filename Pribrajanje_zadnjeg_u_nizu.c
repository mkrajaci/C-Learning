/* 2010-02-01-ispit-1, 2. zadatak
* Napisati funkciju koja ce u zadanom cjelobrojnom nizu svakom elementu
* osim posljednjeg pribrojiti posljednji element niza.
* Sami osmislite prototip funkcije.
*/
#include <stdio.h>
void funkcija_pribrajanja(int *niz, int duljina);
int main(void)
{
	int niz[] = { 1, 2, 3, 4, 10 };
	int duljina_niza, brojac;
	duljina_niza = sizeof(niz) / sizeof(niz[0]);	/*odredjivanje duljine niza*/

	funkcija_pribrajanja(niz, duljina_niza);
	for (brojac = 0; brojac < duljina_niza; ++brojac)
	{
		printf("%d ", niz[brojac]);
	}
	getchar();
	getchar();
	return 0;
}
void funkcija_pribrajanja(int *niz, int duljina)
{
	int brojac;
	for (brojac = 0; brojac < (duljina-1);++brojac)
	{
		niz[brojac] += niz[duljina - 1];			/*pribrajanje zadnjeg clana niza svima ispred sebe*/
	}
	return 0;
}