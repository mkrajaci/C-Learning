/*Jaki brojevi su oni brojevi kod kojih je suma faktorijela znamenki jednaka samom broju.
Npr. za broj 145 vrijedi: 1! + 4! + 5!= 145.
Napisati program koji æe provjeriti da li je broj kojeg je unio korisnik jaki broj.*/

#include <stdio.h>

int main(void)
{
	int uneseni_broj, znamenka, brojac, brojac_dodatni, faktorjel, suma = 1;

	printf("Unesite jedan broj\n");
	scanf_s("%d", &uneseni_broj);

	for (brojac = 1; brojac <= uneseni_broj; ++brojac)
	{
		znamenka = uneseni_broj % 10;
		uneseni_broj = uneseni_broj / 10;
		
		for (brojac_dodatni = 1, faktorjel = 1; brojac_dodatni <= znamenka; ++brojac_dodatni)
		{
			faktorjel = faktorjel * brojac_dodatni;

		}
		suma = suma + faktorjel;
	}
	if (suma != uneseni_broj)
	{
		printf("Jaki broj");
	}

	getchar();
	getchar();

	return 0;
}