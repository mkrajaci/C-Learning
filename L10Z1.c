/*Definirati strukturu Proizvod koja sadrži: sifru proizvoda (unsigned), naziv proizvoda, kolicina prodanih proizvoda (unsigned)
i cijenu (float). Napisati funkciju koja prima niz struktura Proizvod i sifru proizvoda. Funkcija treba ispisati
koliko je proizvoda s tom sifrom prodano te koja je ukupna zarada. U glavnom programu deklarirati i inicijalizirati unosom 
od korisnika niz od 3 strukture Proizvod te ga proslijediti funkciji kako bi provjerili ispravnost rada funkcije.
Npr. za unos:
- 1, Cokolada, 2, 5.5
- 1, Cokolada, 4, 5.5
- 2, Keksi, 2, 9.45
Funkcija za cokoladu treba ispisati da je prodano 6 komada i da je ukupna zarada 33.00.*/
#include <stdio.h>
void prodano_zarada(struct proizvod *sif);
struct proizvod
{
	unsigned sifra;
	unsigned kolicina;
	char naziv[10];
	float cijena;
};
int main(void)
{
	struct proizvod sif[] = {		//punjenje podataka u strukturu
		{ 1, 1, "cokolada", 5.5 },
		{ 2, 1, "keksi", 9.45 },
	};
	prodano_zarada(&sif[1]);	//biram koji proizvod zelim ispisati
	getchar();
	getchar();
	return 0;
}
void prodano_zarada(struct proizvod *sif)
{
	printf("%u %u %s %.02lf \n", sif->sifra, sif->kolicina, sif->naziv, sif->cijena);	//ispis podataka iz strukture
}