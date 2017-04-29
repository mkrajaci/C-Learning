/*Napisati program za simulaciju punjenja ko�arice prilikom online kupovine. Unaprijed nije
poznato koliko �e korisnik proizvoda dodati u ko�aricu, te je ko�arica u startu prazna.
Korisnik unosi �ifre proizvoda (za potrebe zadatka to mogu bili koji pozitivni cijeli brojevi)
te se korisnika prije svakog unosa pita da li �eli dodati proizvod u ko�aricu (D za
dodavanje, N za prekid unosa).
Nakon zavr�etka unosa alocirati niz u koji je potrebno pospremiti cijene proizvoda
(generirati vrijednosti od 10 do 100) te ispisati pojedina�ne cijene i ukupni tro�ak.
Pripaziti na situacije kada je korisnik odlu�io da ne�e unijeti niti jedan proizvod.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void funkcija_za_izracun_cijena(brojac);
int main(void)
{
	int *niz;
	int brojac, sifra_proizvoda;
	char proizvod_u_kosaricu;	
	for (brojac = 0; ;)
	{
		printf("Zelite li dodati proizvod u kosaricu? ");
		scanf(" %c", &proizvod_u_kosaricu);
		if (proizvod_u_kosaricu == 'N' || proizvod_u_kosaricu == 'n')
			break;
		printf("Unesite sifru: ");
		scanf("%d", &sifra_proizvoda);
		++brojac;
		if (brojac == 1)	//inace nepotrebno ali smo morali barem jednom upotrijebiti malloc, moglo je sve sa realloc
		{
			niz = malloc(brojac*sizeof(int));
			niz[brojac] = sifra_proizvoda;
		}
		else
		{
			niz = realloc(niz, brojac*sizeof(int));
			niz[brojac] = sifra_proizvoda;
		}
	}
	funkcija_za_izracun_cijena(brojac);
	getchar();
	getchar();
	return 0;
}
void funkcija_za_izracun_cijena(int brojac)
{
	int *niz_cijena;
	int suma = 0, duzina;
	duzina = brojac;
	niz_cijena = malloc(brojac*sizeof(int));
	printf("Ispis cijena: ");
	for (brojac = 0; brojac < duzina; ++brojac)
	{
		niz_cijena[brojac] = rand() % 91 + 10;
		suma += niz_cijena[brojac];
		printf("%d ", niz_cijena[brojac]);
	}
	printf("Ukupna cijena iznosi: %d", suma);
}