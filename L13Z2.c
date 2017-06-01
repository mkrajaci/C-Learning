/*struct place {
 char name[80 + 1];
 double latitude;
 double longitude;
 };
 struct node {
 struct place city;
 struct node *next;
 };
 Strukturama node je opisan put jednog trgovačkog putnika od grada do grada. Svaka takva struktura sadrži informacije o jednom
 posjećenom gradu (član city) i informaciju o idućoj točki puta (član next). Posljednja točka puta ima član next postavljen na NULL.
 Napišite funkciju koja primi pokazivač na prvu točku puta te ispiše sva imena gradova kroz koje je putnik prošao te kao povratnu
 vrijednost vrati broj prijeđenih gradova.*/
#include <stdio.h>
struct place
{
    char name[80 + 1];
    double latitude;
    double longitude;
};
struct node
{
    struct place city;
    struct node *next;
};
int funkcija(struct node *putovanja);
int main(void)
{
    struct place gradovi1={"Zagreb", 1.1, 1.2};     //Kreiranje struktura
    struct place gradovi2={"Rijeka", 2.2, 2.2};
    struct place gradovi3={"Dubrovnik", 2.2, 2.2};
    struct node putovanje3={gradovi3, NULL};
    struct node putovanje2={gradovi2, &putovanje3};
    struct node putovanje1={gradovi1, &putovanje2}; //drugi clan je pokazivac na sljedecu strukturu tipa node
    printf("Gradova je: %d\n", funkcija(&putovanje1));
    return 0;
}
int funkcija(struct node *putovanja)
{
    int brojac_gradova=0;
    struct node *p=putovanja;      //p koristim za setanje po putovanjima
    while(1)
    {
        puts(p->city.name);
        ++brojac_gradova;
        if(p->next==NULL)
            break;
        p=p->next;              //postavljanje p na sljedeci grad
    }
    return brojac_gradova;
}
