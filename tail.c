/*tail je program koji na zaslon ispisuje samo zadnjih N linija neke tekstualne datoteke. Implementirajte njegovu funkcionalnost:
 upitajte korisnika putanju do jedne datoteke i broj linija N, te ispišite samo zadnjih N linija iz zadane datoteke.*/
#include <stdio.h>
int main(void)
{
    FILE *f;
    char buffer[100];
//    char putanja[100];
    int n;
//    printf("Unesite putanju do svoje dateke:\n");
//    gets(putanja);
    printf("Unesite koliko zadnjih linija zelite ispisati:\n");
    scanf("%d", &n);
//    f=fopen(putanja, "r");
    f=fopen("recenice.txt", "r");
    if(f==NULL)
        return 9;
    int brojac=0;
    while(fgets(buffer, 100, f)!=NULL)
        ++brojac;       //Brojanje ukupnog broja linija
    int pocetak_ispisa=brojac-n;    //Odredivanje pocetka ispisa
    brojac=0;
    fseek(f, 0, SEEK_SET);     //vracanje kursora na pocetak datoteke
    while(fgets(buffer, 100, f)!=NULL)
    {
        if(pocetak_ispisa<=brojac)  //ispis recenica kada brojac dodje do pocetka ispisa
            puts(buffer);
        ++brojac;
    }
    fclose(f);
    return 0;
}
