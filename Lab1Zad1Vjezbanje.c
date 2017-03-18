/*Potrebno je napisati program koji učitava dva pozitivna jednoznamenkasta broja od korisnika.
Pomoću učitanih brojeva stvoriti i na zaslon ispisati parne dvoznamenkaste brojeve kojima su znamenke učitani brojevi.
Stvoreni dvoznamenkasti broj mora sadržavati oba učitana broja. Redoslijed kojim su ispisani stvoreni parni brojevi nije bitan.
Npr.
- Za učitane brojeve 4 i 6 ispisati:
 Parni brojevi stvoreni od znamenaka 4 i 6 su: 46 i 64
- Za učitane brojeve 4 i 5 ispisati:
 Parni brojevi stvoreni od znamenaka 4 i 5 su: 54
- Za učitane brojeve 3 i 5 ispisati:
 Nema parnih brojeva.*/

#include <stdio.h>

int main(void)
{

	unsigned prvi_ucitani_broj, drugi_ucitani_broj, prvi_rezultat, drugi_rezultat;

	printf("Unesite dva jednoznamenkasta broja ");
	scanf_s("%u %u", &prvi_ucitani_broj, &drugi_ucitani_broj);
	
	if (prvi_ucitani_broj && drugi_ucitani_broj < 10)
	{
		prvi_rezultat = (prvi_ucitani_broj * 10) + drugi_ucitani_broj;
		drugi_rezultat = (drugi_ucitani_broj * 10) + prvi_ucitani_broj;

		if (prvi_rezultat % 2 == 0 && drugi_rezultat % 2 == 0)
		{
			printf("Parni brojevi stvoreni od znamenaka %u i %u je: %u %u", prvi_ucitani_broj, drugi_ucitani_broj, prvi_rezultat, drugi_rezultat);
		}
		else if (prvi_rezultat %2 == 0)
			printf("Parni brojevi stvoreni od znamenaka %u i %u je: %u", prvi_ucitani_broj, drugi_ucitani_broj, prvi_rezultat);
		else if (drugi_rezultat % 2 == 0)
			printf("Parni brojevi stvoreni od znamenaka %u i %u je: %u", prvi_ucitani_broj, drugi_ucitani_broj, drugi_rezultat);
		else printf("Za ucitane brojeve %u i %u nema parnih brojeva", prvi_ucitani_broj, drugi_ucitani_broj);

		
			
	}
	else printf("niste unijeli jednoznamenkaste brojeve");

	getchar();
	getchar();

	return 0;
}