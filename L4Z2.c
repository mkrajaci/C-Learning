/*Napisati program koji �e ispisati sve �lanove reda do zadanog indeksa. 
Red se formira na slijede�i na�in: 1, 1, 2, 22, 3, 33, 4, 44�

Za ra�unanje i ispis �lanova reda napraviti posebnu funkciju.
Tako�er napraviti vlastitu funkciju za izra�un potencije.
*/

#include <stdio.h>

void funkcija(int potencija);
void funkcija_dva(int baza);

int main(void)
{
	int potencija;

	printf("Unesite broj elemenata\n");
	scanf_s("%d", &potencija);

	funkcija(potencija);

	getchar();
	getchar();
	return 0;
}

void funkcija(int potencija)		/*Funkcija odre�uje bazu*/
{
	int brojac, baza = 1;

	for (brojac = 1; brojac <= potencija;)
	{
		baza = brojac;
		++brojac;
		--potencija;
		printf("%d ", baza);
		funkcija_dva(baza);


	}
}

void funkcija_dva(int baza)			/*Funkcija odre�uje exponent*/
{
	int brojevi, brojac_2;
	for (brojac_2 = 1, brojevi = 1; brojac_2 <= baza;)
	{
		brojevi = brojevi * baza;
		++brojac_2;
	}
	printf("%d ", brojevi);
}