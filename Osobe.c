/*Neka su zapisi o osobama spremljeni u jedan string na način da su zapisi međusobno odvojene znakom ; dok su podaci o svakoj osobi (ime, prezime, znak u horoskopu i broj cipela) odvojeni znakom ,
 
 Npr.
 
 Ivana,Horvat,Ovan,39;Kresimir,Majdek,Skorpion,45;Tomislav,Snajder,Vaga,43;Marija,Majer,Bik,38
 
 Potrebno je napisati funkciju koja će primiti string koji sadrži podatke o osobama (formatirane prema gornjoj uputi) i jedan indeks, te ispisati podatke o osobi na tom indeksu odnosno poruku "Osoba ne postoji!" ukoliko osoba na traženom indeksu ne postoji. Prototip funkcije je: */

#include <stdio.h>
#include <string.h>
void print_person(char *persons, unsigned index);
int main(void)
{
    char persons[] = "Ivana,Horvat,Prvi,39;Kresimir,Majdek,Drugi,45;Tomislav,Snajder,Treci,43;Marija,Majer,Cetvrti,38";
    unsigned index;
    printf("Upisite indeks: ");
    scanf("%u", &index);
    print_person(persons, index);
    return 0;
}
void print_person(char *persons, unsigned index)
{
    char *p, *ispis;
    p=strtok(persons, ";");     //inicijalno rezanje stringa i spremanje u p
    if(index>1)
    {
        for(int brojac=0; brojac<index-1;++brojac)
            p=strtok(NULL, ";");
    }
    if(p==NULL)
        printf("Osoba s indeksom %u ne postoji. \n", index);
    else
    {
        ispis=strtok(p, ",");
        printf("Ime: %s\n", ispis);
        ispis=strtok(NULL, ",");
        printf("Prezime: %s\n", ispis);
        ispis=strtok(NULL, ",");
        printf("Poredak: %s\n", ispis);
        ispis=strtok(NULL, ",");
        printf("Broj cipela: %s\n", ispis);
    }
}
