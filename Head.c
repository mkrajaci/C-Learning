/*head je program koji na zaslon ispisuje samo prvih N linija neke tekstualne datoteke. Implementirajte njegovu funkcionalnost:
 upitajte korisnika putanju do jedne datoteke i broj linija N, te ispišite samo prvih N linija iz zadane datoteke.*/
#include <stdio.h>
int main(void)
{
    FILE *f;
//    char putanja[100];
    char buffer[100];
    int n;
//    printf("Unesite putanju datoteke:\n");
//    gets(putanja);
    printf("Unesite koliko linija zelite ispisati:\n");
    scanf("%d", &n);
//    f=fopen(putanja, "r");
    f=fopen("recenice.txt", "r");
    if(f==NULL)
        return 9;
    for(int brojac=0; brojac<n; ++brojac)
    {
        fgets(buffer, 100, f);  //citanje linije po linije iz datoteke
        puts(buffer);
    }
    fclose(f);
    return 0;
}
