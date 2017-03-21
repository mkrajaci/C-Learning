/*Potrebno je napisati program koji će za uneseni niz brojeva izračunati geometrijsku
sredinu te najmanju i najveću vrijednost. Korisnik definira broj članova za koje želi
izračun i potom ih unosi. Geometrijska sredina se dobije tako da se brojevi pomnože i
nakon toga se izračuna n-ti korijen tog umnoška.
Odnosno: (x1 ∗ x2 ∗ … . xn )
1/n ili √x1 ∗ x2 ∗ … . xn
𝑛
Za računanje geometrijske sredine se u obzir uzimaju samo pozitivni cijeli brojevi veći od
nule. Ukoliko korisnik unese broj koji ne odgovara uvjetu zanemariti ga. Računanje
sredine i najmanjeg i najvećeg broja obaviti unutar funkcije koja navedene vrijednosti
treba i ispisati. Npr. ako korisnik unese za broj članova broj 5 i nakon toga unese
vrijednosti: 1, 0, -2, 2, 3, 4, 5 program treba ispisati da je najveći 5, najmanji 1 te da je
geometrijska sredina 2.61.*/

#include <stdio.h>

void funkcija();

int main(void)
{
	unsigned uneseni_broj, broj_clanova;
	printf("Unesite broj clanova");
	scanf_s("%u", &broj_clanova);


	funkcija(uneseni_broj, broj_clanova);

	getchar();
	getchar();

	return 0;

}

void funkcija(uneseni_broj, broj_clanova);
{
	unsigned najmanji = 0, najveci = 0, sredina = 0, brojac;
	
	if (uneseni_broj < najmanji)
	{
		najmanji = uneseni_broj;
	}

}
