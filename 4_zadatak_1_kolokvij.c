/*Upitajte korisnika jedan prirodni broj N, te ispišite najveæi broj manji od N koji ima
najmanje 3 djelitelja (ne raèunajuæi 1 i njega samog). Ukoliko takvog broja nema, ispišite na zaslon
"Trazeni broj ne postoji".
Npr. za N == 18, traženi broj je 16 koji je djeljiv sa 2, 4 i 8.*/
#include <stdio.h>
int main(void)
{
	int uneseni_broj, brojac_prvi, brojac_drugi, djeljiv = 0;
	printf("Unesite jedan broj: ");
	scanf("%d", &uneseni_broj);
	for (brojac_prvi = uneseni_broj - 1; brojac_prvi > 1; --brojac_prvi)	/*Uneseni broj umanjujem za jedan i predajem brojacu*/
	{
		for (djeljiv = 0, brojac_drugi = 2; brojac_drugi < uneseni_broj; ++brojac_drugi)
		{
			if (brojac_prvi % brojac_drugi == 0)	/*Provjera je li uneseni broj -1 djejiv sa manjima od sebe*/
				++djeljiv;
		}
		if (djeljiv >= 3)	/*Kada nadje tri djeljitelja izlaz iz petnje*/
			break;
	}
	if (djeljiv >= 3)
		printf("Najveci broj sa najmanje tri djeljitelja je: %d ", brojac_prvi);
	else printf("Trazeni broj ne postoji");
	getchar();
	getchar();
	return 0;
}