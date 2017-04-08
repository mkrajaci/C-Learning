/*) Napišite funkciju koja primi jedan pozitivan cijeli broj, te vrati vrijednost najznaèajnije dekadske znamenke.
Npr. za broj 234567 najznaèajnija dekadska znamenka ima vrijednost 2.*/
#include <stdio.h>

int funkcija_znamenke(int broj);

int main(void)
{
	int broj, najznacajnija_znamenka;
	printf("Unesite broj za izracun prve znamenke: \n");
	scanf("%d", &broj);
	najznacajnija_znamenka = funkcija_znamenke(broj);
	printf("Prva znamenka unesenog broja: %d je %d", broj, najznacajnija_znamenka);

	getchar();
	getchar();

	return 0;
}
int funkcija_znamenke(int broj)
{
	int znamenka;
	for (; broj > 0;)
	{
		znamenka = broj % 10;			/*Odreduje znameku*/
		broj /= 10;						/*brise zadnju znamenku*/
	}
	return znamenka;
}