/*7) (25 bodova) Napišite funkciju koja primi jedan niz sa rezultatima prvog kolokvija iz PMA (svaki èlan niza sadrži broj bodova jednog studenta).
Funkcija neka ispiše ukupni prosjek ocjena svih studenata, te prosjek ocjena samo onih studenata koji su položili, 
dok kao povratnu vrijednost funkcija treba vratiti broj studenata koji su položili.
Ocjene su odreðene sljedeæom bodovnom tablicom:

Broj bodova		Ocjena
	0-39		nedovoljan
	40-54		dovoljan
	55-69		dobar
	70-84		vrlo dobar
	85-100		izvrstan
*/
#include <stdio.h>

int funkcija_za_izracun_prolaznosti(int *niz, int duljina);

int main(void)
{
	int niz[] = { 0, 28, 45, 60, 70, 50, 90, 99 };
	int broj_returna = 0;
	int duljina = sizeof(niz) / sizeof(niz[0]);
	printf("\n%d", broj_returna = funkcija_za_izracun_prolaznosti(niz, duljina));
	getchar();
	getchar();
	return 0;
}

int funkcija_za_izracun_prolaznosti(int *niz, int duljina)
{
	int ukupni_prosjek = 0, prosjek=0, ukupni_zbroj = 0, polozeni_zbroj = 0, polozeni_studenti = 0, brojac = 0;
	for (; brojac < duljina; ++brojac)
	{
		if (niz[brojac] > 39)
		{
			polozeni_zbroj += niz[brojac];
			++polozeni_studenti;
		}
		ukupni_zbroj += niz[brojac];
	}
	ukupni_prosjek = ukupni_zbroj / duljina;
	prosjek = polozeni_zbroj / polozeni_studenti;

	if (ukupni_prosjek <= 39)
		printf("ukupni prosjek svih je nedovoljan.\n");
	else if (ukupni_prosjek >= 40 && ukupni_prosjek <= 54)
		printf("Ukupni prosjek svih je dovoljan.\n");
	else if (ukupni_prosjek >= 55 && ukupni_prosjek <= 69)
		printf("Ukupni prosjek svih je dobar.\n");
	else if (ukupni_prosjek >= 70 && ukupni_prosjek <= 84)
		printf("Ukupni prosjek svih je vrlo dobar.\n");
	else if (ukupni_prosjek >= 85 && ukupni_prosjek <= 100)
		printf("Ukupni prosjek svih je odlican.\n");

	if(prosjek >= 40 && prosjek <= 54)
		printf("Prosjek polozenih je dovoljan.");
	else if (prosjek >= 55 && prosjek <= 69)
		printf("Prosjek polozenih je dobar.");
	else if (prosjek >= 70 && prosjek <= 84)
		printf("Prosjek polozenih je vrlo dobar.");
	else if (prosjek >= 85 && prosjek <= 100)
		printf("Prosjek polozenih je odlican.");
	
	return polozeni_studenti;
}
