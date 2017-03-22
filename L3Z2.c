/*Napisati program koji izraèunava trošak prijevoza ovisno o prijevoznom sredstvu.
Korisnik unosi:
- Oznaku prijevoznog sredstva (A- avion, V- vlak, B- bus)
- Udaljenost u km
- Broj odraslih osoba i djece koja putuju.
Ako je korisnik odabrao avion cijena je 3 kn/km, za bus 2kn/km, a za vlak 1.5kn/km. Cijene su po osobi, a djeca imaju pravo na 20% popusta.
Izraèun cijene napraviti u funkciji koja prima broj odraslih, broj djece, km i cijenu po km, a vraæa ukupnu cijenu koju ispisujemo u glavnom programu.
Koristiti switch-case.*/

#include <stdio.h>

double izracun_cijene(double kn, double km, double odrasli, double djeca)
{
	double cijena_odrasli, cijena_djeca, ukupna_cijena;
	cijena_odrasli = odrasli*km*kn;
	cijena_djeca = djeca*km*kn*0.8;
	ukupna_cijena = cijena_odrasli + cijena_djeca;
	return ukupna_cijena;
}

int main(void)
{

	char oznaka;
	double broj_kilometara, broj_djece, broj_odraslih;
	double cijena;

/*	printf("Unesite oznaku prijevoznog sredstva");
	scanf_s("%c", &oznaka);
	
	switch (oznaka)
	{
		case 'A':
			cijena = 3;
			break;
		case 'B':
			cijena = 2;
			break;
		case 'V':
			cijena = 1.5;
			break;
	}*/

	printf("Unesite kilometre\n");
	scanf_s("%lf", &broj_kilometara);
	printf("Unesite broj odraslih i djece\n");
	scanf_s("%lf %lf", &broj_odraslih, &broj_djece);

	printf("Ukupna cijena iznosi: %lf ", izracun_cijene(3, broj_kilometara, broj_odraslih, broj_djece));


	getchar();
	getchar();

	return 0;
}