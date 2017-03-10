/*Jaki brojevi su oni brojevi kod kojih je suma faktorijela znamenki jednaka samom broju.
Npr. za broj 145 vrijedi: 1! + 4! + 5!= 145.
Napisati program koji æe provjeriti da li je broj kojeg je unio korisnik jaki broj.*/

#include <stdio.h>

int main(void)
{
	unsigned broj, unesen_broj, znamenke_broja, zbroj_znamenki_faktorjela = 0, faktorjel = 1, faktorjel_zboj = 0;

	printf("Unesite broj:\n");
	scanf_s("%u", &broj);
	unesen_broj = broj;

	for (; broj > 0; broj = broj / 10)
	{
		znamenke_broja = broj % 10;
		faktorjel = 1;
													/*printf("znamenke broja su: %u\n", znamenke_broja);*/
		for (unsigned brojac = 1; brojac <= znamenke_broja; brojac = brojac + 1)
		{
			faktorjel = faktorjel * brojac;

		}

		zbroj_znamenki_faktorjela = zbroj_znamenki_faktorjela + faktorjel;

													/*printf("Faktorjel: %u\n", faktorjel);*/
	}

	if (unesen_broj == zbroj_znamenki_faktorjela)
	{
		printf("Broj je jak. %u\n", zbroj_znamenki_faktorjela);
	}
	else printf("broj je slab.\n");

	getchar();
	getchar();

	return 0;

}