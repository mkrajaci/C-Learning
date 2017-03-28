/*Napisati funkciju koja æe primiti cijeli broj veæi od nule te odvojiti znamenke djeljive s 3 i
one koje to nisu u dva odvojena broja.
Primjer: broj 13597 treba pretvoriti u brojeve 157 i 39.
Funkcija brojeve treba vratiti glavnom programu koji ih onda ispisuje.*/

#include <stdio.h>

int funkcija_za_povrat_brojeva();

int main(void)
{
	int uneseni_broj, znamenka, brojac, djeljiv = 0, nije_djeljiv = 0;
	/*
	printf("Unesite jedan cijeli broj: ");
	scanf_s("%d", &uneseni_broj);
	*/
	uneseni_broj = 13597;

	for (brojac = 0; brojac <= uneseni_broj; ++brojac)
	{
		znamenka = uneseni_broj % 10;
		uneseni_broj /= 10;
		
		if (znamenka % 3 == 0)
			djeljiv = znamenka;
		else
			nije_djeljiv = znamenka;

		printf("%d ", djeljiv);
		printf("%d ", nije_djeljiv);
	}

	getchar();
	getchar();

	return 0;
}