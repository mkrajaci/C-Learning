/*Napisati program koji æe ispisati sve èlanove reda do zadanog indeksa. 
Red se formira na slijedeæi naèin: 1, 1, 2, 22, 3, 33, 4, 44…

Za raèunanje i ispis èlanova reda napraviti posebnu funkciju.
Takoðer napraviti vlastitu funkciju za izraèun potencije.
*/

#include <stdio.h>

int main(void)
{
	int broj_clanova, brojac = 0;

	printf("Unesite broj elemenata\n");
	scanf_s("%d", &broj_clanova);

	int i = 1;
	while (1)
	{
		if (brojac < broj_clanova)
		{
			printf("%d ", i);
			++brojac;
		}
		if (brojac < broj_clanova)
		{
			printf("%d ", potencija(i, i));
			++brojac;
		}
		if (brojac == broj_clanova)
			break;
		++i;
	}

	getchar();
	getchar();
	return 0;
}

int potencija(int baza, int eksponent)
{
	int potencija = 1;
	int brojac = 1;
	while (brojac <= eksponent)
	{
		potencija = potencija * baza;
		++brojac;
	}
	return potencija;

}