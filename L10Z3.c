/*struct datoteka {
char naziv[128];
unsigned velicina;
};
struct folder {
char naziv[128];
struct folder *folderi;
int broj_foldera;
struct datoteka *datoteke;
int broj_datoteka;
};
Uz zadane definicije struktura datoteka i folder napiši funkciju koja æe primiti pokazivaè
na jedan folder te ispisati pune nazive svih datoteka s ekstenzijom „jpg“ koje se u njemu
nalaze. Povratna vrijednost funkcije je ukupna velièina svih JPG datoteka u tom folderu.
Uputa: napunis si niz struktura ruèno (zaharkodiraš), ne biras si folder s diska jer nismo radili šetanje po file Exploreru (niti æemo)*/
#include <stdio.h>
#include <string.h>
struct datoteka 
{
	char naziv[128];
	unsigned velicina;
};
struct folder 
{
	char naziv[128];
	struct folder *folderi;
	int broj_foldera;
	struct datoteka *datoteke;
	int broj_datoteka;
};
double velicina_slike(struct folder*);
int main(void) 
{
	double velicina;
	struct datoteka datoteka[4];
	strcpy(datoteka[0].naziv, "slika1.jpg");
	strcpy(datoteka[1].naziv, "slika2.jpg");
	strcpy(datoteka[2].naziv, "slika3.jpg");
	strcpy(datoteka[3].naziv, "slika4.jpg");
	datoteka[0].velicina = 10;
	datoteka[1].velicina = 10;
	datoteka[2].velicina = 10;
	datoteka[3].velicina = 10;
	struct folder folder;
	folder.broj_datoteka = 4;
	folder.datoteke = datoteka;
	strcpy(folder.naziv, "folder1");
	velicina = velicina_slike(&folder);
	printf("%.2lf", velicina);
	getchar();
	getchar();
	return 0;
}
double velicina_slike(struct folder *pokazivac_na_folder) 
{
	unsigned ukupna_velicina_slika = 0;
	int brojac;
	for (brojac = 0; brojac < pokazivac_na_folder->broj_datoteka; brojac++)
	{
		int duljina_naziva = strlen(pokazivac_na_folder->datoteke[brojac].naziv);
		char *eks = pokazivac_na_folder->datoteke[brojac].naziv + duljina_naziva - 4;
		if (!strcmp(eks, ".jpg"))
		{
			ukupna_velicina_slika += pokazivac_na_folder->datoteke[brojac].velicina;
			puts(pokazivac_na_folder->datoteke[brojac].naziv);
		}
	}
	return ukupna_velicina_slika;
}