/*(35 bodova) Nesretni brojevi su pozitivni parni cijeli brojevi djeljivi sa 13. 
Napišite:
a) (20 bodova) funkciju koja za ulazni parametar broj raèuna 
je li on nesretan ili nije, te sukladno tome vraæa 1 odnosno 0.
b) (15 bodova) glavni program koji æe tražiti unos brojeva od korisnika 
sve dok ne unese neki nesretan broj (je li broj nesretan ili ne provjerite 
pomoæu funkcije iz prvog dijela zadatka).*/
#include <stdio.h>
int funkcija_za_provjeru_nesretnog_broja(int broj);
int main(void)
{
	int broj, brojac = 0, povrat_iz_funkcije;
	printf("Unesite jedan broj: ");
	while (1)
	{
		scanf("%d", &broj);
		povrat_iz_funkcije = funkcija_za_provjeru_nesretnog_broja(broj);
		++brojac;
		if (!povrat_iz_funkcije)
		{
			printf("Niste unijeli nesretan broj, ponovite \n");
			continue;
		}
		break;
	}
	getchar();
	getchar();

	return 0;
}
int funkcija_za_provjeru_nesretnog_broja(int broj)
{
	if (broj % 13)
		return 0;
	else
		return 1;
}