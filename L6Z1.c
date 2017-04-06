/*Napisati funkciju koja prima niz realnih brojeva te podijeli sve èlanove niza s elementom niza koji ima najveæu apsolutnu vrijednost. 
Funkcija vraæa 1 ako je dijeljenje uspjelo, 0 u suprotnom. Za izraèun apsolutne vrijednosti broja napisati vlastitu funkciju.
U glavnom programu napuniti unosom od korisnika niz od 8 elemenata, proslijediti ga funkciji te ovisno o tome da li je dijeljenje uspjelo ili nije ispisati elemente niza.*/

#include <stdio.h>
#include <math.h>
float funkcija_prima_niz(float *niz, int duljina, float element);
float funkcija_apsolutna_vrijednost(float *niz, int duljina);
int main(void)
{
	float element = 0.0, *p;
	float niz[8] = { 1, 2, -4, 3, 0, 8, 5, 10 };
	p = niz;
/*
	while (p <= &niz[7])
	{
		scanf("%f", p);
		++p;
	}
*/
	element = funkcija_apsolutna_vrijednost(niz, 8);	/*spremanje elementa djeljenje iz rezultata funkcije*/
	funkcija_prima_niz(niz, 8, element);				/*poziv funkcije za niz brojeva i djeljenje s navjecom apsolutnom vrijednoscu*/
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
float funkcija_prima_niz(float *niz, int duljina, float element)
{
	if (element > 0)									/*Osigurac ako je element djeljenja == 0*/
	{
		int brojac = 0;
		while (brojac < duljina)
		{
			niz[brojac] /= element;						/*djeljenje s elementom*/
			printf("%f ", niz[brojac]);
			++brojac;
		}
		return 1;
	}
	return 0;
}
float funkcija_apsolutna_vrijednost(float *niz, int duljina)
{
	float apsolutna_vrijednost, najveca_abs_vrijednost = niz[0], element_sa_najvecom_abs_vrijednosti = niz[0];
	int brojac = 0;
	while (brojac < duljina)
	{
		apsolutna_vrijednost = sqrt(pow(niz[brojac], 2));	/*formula za apsolutnu vrijednost*/
		if (apsolutna_vrijednost > najveca_abs_vrijednost)	
		{
			najveca_abs_vrijednost = apsolutna_vrijednost;
			element_sa_najvecom_abs_vrijednosti = niz[brojac];	/*spremanje elementa koji ima najvecu abs vrijednost*/
		}
		++brojac;
	}
	return element_sa_najvecom_abs_vrijednosti;
}