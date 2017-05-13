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
 Uz zadane definicije struktura datoteka i folder napiši funkciju koja ce primiti pokazivac
 na jedan folder te ispisati pune nazive svih datoteka s ekstenzijom „jpg“ koje se u njemu
 nalaze. Povratna vrijednost funkcije je ukupna velicina svih JPG datoteka u tom folderu.
 Uputa: napunis si niz struktura rucno (zaharkodiras), ne biras si folder s diska jer nismo radili setanje po file Exploreru (niti cemo)*/
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
double moja_funkcija(struct folder *mapa);
int main(void)
{
    double velicina_datoteka;
    struct datoteka datoteka[]= //upisivanje podataka u strukturu
    {
        {"slika1.jpg", 130},
        {"slika2.jpg", 130},
        {"text.txt", 13}
    };
    struct folder folder[]=     //upisivanje podataka u strukturu strukture
    {
        {"root", NULL, 0, datoteka, 3}
    };
    velicina_datoteka=moja_funkcija(folder);
    printf("%0.2lf\n", velicina_datoteka);
    return 0;
}
double moja_funkcija(struct folder *mapa)
{
    double ukupna_velicina=0;
    int brojac;
    char *pointer;
    for(brojac=0; brojac<3;++brojac)
    {
        pointer=strchr(mapa->datoteke[brojac].naziv, '.');  //postavljanje pointera na . jer trebam .jpg
        if(!strcmp(pointer, ".jpg"))
        {
        puts(mapa->datoteke[brojac].naziv);                 //ispis naziva datoteke sa trazenom ekstenzijom
        ukupna_velicina+=mapa->datoteke[brojac].velicina;   //zbrajanje velicina datoteka
        }
    }
    return ukupna_velicina;
}
