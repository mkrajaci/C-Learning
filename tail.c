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
    int brojac=0, brojac_novih_redova=0;
    fseek(f, 0, SEEK_END);  //slanje kursora na kraj
    brojac=ftell(f);        //provjera duzine datoteke i spremanje u brojac za brojanje unatrag
    for(; brojac>=0; --brojac)
    {
        fseek(f, brojac, SEEK_SET); //pomicanje kursora na slovo po slovo od kraja prema pocetku datoteke
        if((ftell(f)==0)||(fgetc(f)=='\n'))      //trazenje znaka za novi red
        {
            ++brojac_novih_redova;  //brojanje znakova za novi red ustvari recenica
            if(brojac_novih_redova>n)   //kada je dostignut trazeni broj recenica, break
            {
                break;
            }
        }
    }
    if(brojac_novih_redova>=n)   //ispis recenica
    {
        for(brojac=0; brojac<=n; ++brojac)
        {
            if(fgets(buffer, 100, f)!=NULL) //citanje linije po linije iz datoteke
            {
                puts(buffer);
            }
            else break;
        }
    }
    fclose(f);
    return 0;
}
