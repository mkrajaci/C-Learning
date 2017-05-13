/*Definirati strukturu za opis poklona kojeg su djeca zatrazila od Djeda Bozicnjaka.
 Struktura sadrzi: ime djeteta, poklon, grad i godine djeteta.
 Napisati funkciju koja primi niz struktura Poklon i ime poklona. Funkcija treba ispisati
 podatke o djeci koja su taj poklon zatrazila te mora pozivajucoj funkciji vratiti broj djece.
 Broj poklona nije unaprijed poznat.
 Uputa: funkcija primi niz s poklonima i poklon koji se trazi i ispise djecu te vrati broj djece koja je poklon trazila -
 obrati paznju da poklone moras ucitati s konzole*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct moja_struktura
{
    char ime_djeteta[15];
    char poklon[15];
    char grad[21];
    unsigned godine_djeteta;
};
unsigned funkcija_broj_poklona(struct moja_struktura *poklon, unsigned broj_poklona, char *ime_poklona);
int main(void)
{
    unsigned broj_poklona;
    unsigned brojac;
    unsigned ukupan_broj_poklona;
    printf("Koliko poklona zelite unijeti? ");
    scanf("%d", &broj_poklona);
    if (broj_poklona)
    {
        struct moja_struktura *pokloni = calloc(broj_poklona, sizeof(struct moja_struktura));	// Alokacija kolicine memorije prema broju poklona
         for (brojac = 0; brojac < broj_poklona; ++brojac)		// punjenje strukture podacima
         {
         printf("Unesite ime: ");
         scanf("%s", pokloni[brojac].ime_djeteta);
         printf("Unesite poklon: ");
         scanf("%s", pokloni[brojac].poklon);
         printf("Unesite grad: ");
         scanf("%s", pokloni[brojac].grad);
         printf("Unesite godine: ");
         scanf("%u", &pokloni[brojac].godine_djeteta);			// Koristim & jer ovo nije niz kao ostale varijable strukture
         }
/*        struct moja_struktura pokloni[] =							// punjenje strukture podacima
        {
            {"Ana", "Barbika", "Zagreb", 6},
            { "Marija", "Barbika", "Novi Vinodolski", 7 },
            { "Pero", "Lego", "Split", 4 },
        };*/
        char ime_poklona[15];
        printf("Koji poklon zelite provjeriti? ");
        scanf("%s", ime_poklona);
        ukupan_broj_poklona = funkcija_broj_poklona(pokloni, broj_poklona, ime_poklona);	//poziv funkcije za provjeru poklona unutar strukture
        printf("Poklon %s zeli %u djece!\n", ime_poklona, ukupan_broj_poklona);	//ispis rezultata provjere funkcije sa nazivom poklona koji smo provjeravali
    }
    return 0;
}
unsigned funkcija_broj_poklona(struct moja_struktura *poklon, unsigned broj_poklona, char *ime_poklona)
{
    unsigned ukupan_broj_poklona = 0;
    unsigned brojac;
    for (brojac = 0; brojac < broj_poklona; ++brojac)
    {
        if (!strcmp(poklon[brojac].poklon, ime_poklona))	//usporedba imena poklona unesenih u strukturu i imena poklona za kojeg se trazi provjera
        {
            printf("Ime: %s ", poklon[brojac].ime_djeteta);
            printf("Grad: %s ", poklon[brojac].grad);
            printf("Godine: %u \n", poklon[brojac].godine_djeteta);
            ukupan_broj_poklona++;
        }
    }
    return ukupan_broj_poklona;
}
