/*Napisati funkciju koja prima niz realnih brojeva te podijeli sve èlanove niza s elementom niza koji ima najveæu apsolutnu vrijednost. 
Funkcija vraæa 1 ako je dijeljenje uspjelo, 0 u suprotnom. Za izraèun apsolutne vrijednosti broja napisati vlastitu funkciju.
U glavnom programu napuniti unosom od korisnika niz od 8 elemenata, proslijediti ga funkciji te ovisno o tome da li je dijeljenje uspjelo ili nije ispisati elemente niza.*/

#include <stdio.h>
#include <math.h>
/*D O V R Š I T I*/
int main(void)
{
	float niz[3], element, *p;

	p = niz;
	while (p <= &niz[2])
	{
		scanf("%f", p);
		++p;
	}
	element = funkcija_apsolutna_vrijednost(niz, 3);
	funkcija_prima_niz(niz, 3, element);
/*
	putchar('\n');

	p = niz + 7;
	while (p != niz)
	{
		printf("%f\n", *p);
		--p;
	}
*/
	getchar();
	getchar();
	return 0;
}
float funkcija_prima_niz(float *niz, float duljina, float element)
{
	int brojac = 0;
	while (brojac < duljina)
	{
		niz[brojac]
	}
}
float funkcija_apsolutna_vrijednost(float *niz, float duljina)
{
	float apsolutna_vrijednost, najveca_abs_vrijednost = niz[0], element_sa_najvecom_abs_vrijednosti = niz[0];
	int brojac = -1;
	while (brojac < duljina)
	{
		++brojac;
		apsolutna_vrijednost = sqrt(pow(niz[brojac], 2));
		if (apsolutna_vrijednost > najveca_abs_vrijednost)
		{
			najveca_abs_vrijednost = apsolutna_vrijednost;
			element_sa_najvecom_abs_vrijednosti = niz[brojac];
		}
	}
	return element_sa_najvecom_abs_vrijednosti;
}