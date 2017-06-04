/*Definirati strukturu Proizvod koja sadrži: sifru proizvoda (unsigned), naziv proizvoda, kolicina prodanih proizvoda (unsigned)
 i cijenu (float). Napisati funkciju koja prima niz struktura Proizvod i sifru proizvoda. Funkcija treba ispisati
 koliko je proizvoda s tom sifrom prodano te koja je ukupna zarada. U glavnom programu deklarirati i inicijalizirati unosom
 od korisnika niz od 3 strukture Proizvod te ga proslijediti funkciji kako bi provjerili ispravnost rada funkcije.
 Npr. za unos:
 - 1, Cokolada, 2, 5.5
 - 1, Cokolada, 4, 5.5
 - 2, Keksi, 2, 9.45
 Funkcija za cokoladu treba ispisati da je prodano 6 komada i da je ukupna zarada 33.00.
 Uputa: izračun treba napraviti u funkciji kako i piše u zadatku.
 Pošalješ niz struktura u kojem se isti proizvod može pojaviti više puta (kako je pokazano u primjeru) i pošalješ šifru proizvoda koji
 te zanima.*/
#include <stdio.h>
struct proizvodi
{
    unsigned char sifra;
    char naziv[50];
    unsigned char kolicina;
    float cijena;
};

void izracun(struct proizvodi *prodani, unsigned char sifra);
int main(void)
{
    //rucno popunjavanje strukture
    struct proizvodi prodani[]=
    {
        {1, "cokolada", 2, 5.5},
        {1, "cokolada", 4, 5.5},
        {2, "keksi", 2, 9.45},
    };
    
    /*for(int brojac=0; brojac<3;++brojac)
    {
        scanf("%c", &prodani[brojac].sifra);
        gets(prodani[brojac].naziv);
        scanf("%c", &prodani[brojac].kolicina);
        scanf("%f", &prodani[brojac].cijena);
    }*/
    
    //predavanje funkciji pokazivac na prvi clan strukture i sifru proizvoda za izracun
    izracun(prodani, 1);
    return 0;
}
void izracun(struct proizvodi *prodani, unsigned char sifra)
{
    int ukupna_kolicina=0;
    
    //setnja kroz strukturu i racunjanje ukupno prodane kolicine za trazeni proizvod
    for(int brojac=0; brojac<3; ++brojac)
    {
        if(prodani[brojac].sifra==sifra)
            ukupna_kolicina+=prodani[brojac].kolicina;
    }
    
    //ispis prodani[sifra] jer trebam njegovu cijenu
    printf("Ukupna zarada je: %.2f \n", prodani[sifra].cijena*ukupna_kolicina);
}
