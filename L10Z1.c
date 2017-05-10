/*Definirati strukturu Proizvod koja sadr�i: sifru proizvoda (unsigned), naziv proizvoda, kolicina prodanih proizvoda (unsigned)
i cijenu (float). Napisati funkciju koja prima niz struktura Proizvod i sifru proizvoda. Funkcija treba ispisati
koliko je proizvoda s tom sifrom prodano te koja je ukupna zarada. U glavnom programu deklarirati i inicijalizirati unosom
od korisnika niz od 3 strukture Proizvod te ga proslijediti funkciji kako bi provjerili ispravnost rada funkcije.
Npr. za unos:
- 1, Cokolada, 2, 5.5
- 1, Cokolada, 4, 5.5
- 2, Keksi, 2, 9.45
Funkcija za cokoladu treba ispisati da je prodano 6 komada i da je ukupna zarada 33.00.
Uputa: izra�un treba napraviti u funkciji kako i pi�e u zadatku. 
Po�alje� niz struktura u kojem se isti proizvod mo�e pojaviti vi�e puta (kako je pokazano u primjeru) i po�alje� �ifru proizvoda koji te zanima.*/
#include <stdio.h>
void prodano_zarada(struct proizvod *sif, int sifra_proizvod, int kolicina_prodano);
struct proizvod
{
	unsigned sifra;
	unsigned kolicina;
	char naziv[10];
	float cijena;
};
int main(void)
{
/*	struct proizvod sif[3];
	int brojac;
	for (brojac = 0; brojac < 3; ++brojac)
	{
		printf("Unesite sifru, kolicinu, naziv i cijenu proizvoda");
		scanf("%u %u %s %f", &sif[brojac].sifra, &sif[brojac].kolicina, &sif[brojac].naziv, &sif[brojac].cijena);
	}
*/
	struct proizvod sif[] = 
	{								//punjenje podataka u strukturu
		{ 1, 2, "cokolada", 5.5 },
		{ 1, 4, "cokolada", 5.5 },
		{ 2, 1, "keksi", 9.45 },
	};

	
	prodano_zarada(sif, 1, 3);	//biram koji proizvod saljem funkciji
	getchar();
	getchar();
	return 0;
}
void prodano_zarada(struct proizvod *sif, int sifra_proizvoda, int kolicina_prodano)
{
	unsigned brojac;
	unsigned broj_prodanih = 0;
	float ukupna_zarada = 0;
	float cijena;
	for (brojac = 0; brojac <= kolicina_prodano; ++brojac)
	{
		if (sifra_proizvoda == sif[brojac].sifra)
		{
			cijena = sif[brojac].kolicina * sif[brojac].cijena;	//izracun cijene
			++broj_prodanih;				//brojanje kolicine prodanih
			ukupna_zarada += cijena;		
		}
	}
	printf("Ukupno je prodano: %d komada i ukupna zarada je: %0.2lf", broj_prodanih, ukupna_zarada);
}