/*head je program koji na zaslon ispisuje samo prvih N linija neke tekstualne datoteke. Implementirajte njegovu funkcionalnost:
 upitajte korisnika putanju do jedne datoteke i broj linija N, te ispišite samo prvih N linija iz zadane datoteke.*/
#include <stdio.h>
int main(void)
{
    FILE *f;
//    char putanja[100];
    char buffer[100];
    int n, brojac_linija=0;
//    printf("Unesite putanju datoteke:\n");
//    gets(putanja);
    printf("Unesite koliko linija zelite ispisati:\n");
    scanf("%d", &n);
//    f=fopen(putanja, "r");
    f=fopen("recenice.txt", "r");
    if(f==NULL)
        return 9;
    while (fgets(buffer, 100, f)!=NULL)
        ++brojac_linija;    //brojanje ukupnog broja linija
    fseek(f, 0, SEEK_SET);  //vracanje kursora na pocetak datoteke
    if(brojac_linija<n)     //Ako je unesen veci broj linija od mogucih ispisa
        return printf("Unijeli ste veci broj linija za ispis od postojecih.");
    for(int brojac=0; brojac<n; ++brojac)
    {
        fgets(buffer, 100, f);  //citanje linije po linije iz datoteke
        puts(buffer);
    }
    fclose(f);
    return 0;
}
