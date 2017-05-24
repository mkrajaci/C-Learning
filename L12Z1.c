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
    detalji[0].stol=1;
    strcpy(detalji[0].jelo_pice, "Juha od povrca");
    detalji[0].cijena=10.00;
    
    detalji[1].stol=2;
    strcpy(detalji[1].jelo_pice, "Becki odrezak");
    detalji[1].cijena=30.00;
    
    detalji[2].stol=3;
    strcpy(detalji[2].jelo_pice, "Espresso");
    detalji[2].cijena=6.00;
    
    detalji[3].stol=3;
    strcpy(detalji[3].jelo_pice, "Mineralna voda");
    detalji[3].cijena=12.00;
    
    detalji[4].stol=1;
    strcpy(detalji[4].jelo_pice, "Gusti sok");
    detalji[4].cijena=10.00;
    
    racuni=fopen("Racuni.dat", "wb+");
    if(racuni==NULL)
        return 1;
    fwrite(&detalji, sizeof(struct narudzbe), 5, racuni);
    fseek(racuni, 0, SEEK_SET);
    
    
    stolovi=fopen("Stolovi.txt", "w");
    if(stolovi==NULL)
        return 2;
    
    struct narudzbe *po_stolovima=calloc(sizeof(struct narudzbe), 5);
    
    float ukupna_cijena=0;
    for(int brojac_stolova=1; brojac_stolova<=3; ++brojac_stolova)
    {
        
        
        
    }
    

    
    return 0;
}
