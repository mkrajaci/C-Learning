/*U neformatiranoj datoteci „Racuni.dat“ nalaze se podaci o narudžbama u nekom ugostiteljskom objektu tijekom jednog dana. Svaki zapis sadrži jednu narudžbu tj. redni broj stola (unsigned), naziv jela ili pića (string) i iznos u kunama (float). Koristeći datoteku „Racuni.dat“ napisati program koji će zapisati u slijednu formatiranu datoteku „Stolovi.txt“ podatke o ukupno zarađenom iznosu za svaki stol tijekom jednog dana. Svaki zapis u datoteci „Stolovi.txt“ sadržava redni broj stola (unsigned) i ukupni iznos (float). Za potrebe zadatka pretpostaviti da postoje samo 3 stola.
Npr. ako su u datoteci „Racuni.dat“ (naravno binarno) zapisani podaci:
1 Juha od povrća 10
2 Becki odrezak 30
3 Espresso 6
3 Mineralna voda 12
1 Gusti sok 10
Sadržaj datoteke „Stolovi.txt“ mora izgledati:
1 20.000000
2 30.000000
3 18.000000*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct narudzbe
{
	unsigned stol;
	char jelo_pice[20];
	float cijena;
};

int main(void)
{
	FILE *stolovi, *racuni;
	struct narudzbe detalji[5];
	detalji[0].stol = 1;			//Punjenje strukture podacima
	strcpy(detalji[0].jelo_pice, "Juha od povrca");
	detalji[0].cijena = 10.00;

	detalji[1].stol = 2;
	strcpy(detalji[1].jelo_pice, "Becki odrezak");
	detalji[1].cijena = 30.00;

	detalji[2].stol = 3;
	strcpy(detalji[2].jelo_pice, "Espresso");
	detalji[2].cijena = 6.00;

	detalji[3].stol = 3;
	strcpy(detalji[3].jelo_pice, "Mineralna voda");
	detalji[3].cijena = 12.00;

	detalji[4].stol = 1;
	strcpy(detalji[4].jelo_pice, "Gusti sok");
	detalji[4].cijena = 10.00;

	racuni = fopen("Racuni.dat", "wb+");		//Otvaranje datoteke racuni
	if (racuni == NULL)
		return 1;
	fwrite(&detalji, sizeof(struct narudzbe), 5, racuni);	//Upis u binarnu datoteku racuni
	fseek(racuni, 0, SEEK_SET);		//Povrat kursora na pocetak datoteke, priprema za kasnije citanje

	stolovi = fopen("Stolovi.txt", "w");		//Otvaranje datoteke stolovi
	if (stolovi == NULL)
		return 2;

	struct narudzbe *po_stolovima = calloc(sizeof(struct narudzbe), 5);	//Kreiranje pomocne strukture u koju zapisujem procitano za kasniju usporedbu u petlji
	fread(po_stolovima, sizeof(struct narudzbe), 5, racuni);

	float ukupna_cijena = 0;
	for (int brojac_stolova = 1; brojac_stolova <= 3; ++brojac_stolova)
	{
		for (int brojac_narudzbi = 0; brojac_narudzbi < 5; ++brojac_narudzbi)
		{
			if (po_stolovima[brojac_narudzbi].stol == brojac_stolova)	//Provjera da gdje se nalazi isti broj stola i zbrajanje ukupne cijene po stolu
				ukupna_cijena += po_stolovima[brojac_narudzbi].cijena;
		}
		fprintf(stolovi, "%d %.2lf", brojac_stolova, ukupna_cijena);	//Upis rezultata u datoteku stolovi
	}
	fclose(racuni);
	fclose(stolovi);
	return 0;
}