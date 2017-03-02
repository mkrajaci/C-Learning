/*Ispis završne ocjene prema unaprijed odeđenim kriterijima*/

#include <stdio.h>

int main(void)
{
	int broj_bodova;

	printf("Unesite ostvareni broj bodova\n");
	scanf_s("%d", &broj_bodova);
									/*Petlja za uneseni broj bodova ispisuje koja je ocjena ostvarena*/
	if (broj_bodova >= 0 && broj_bodova <= 39)
		printf("Ocjena je: 1\n");
	else if (broj_bodova >= 40 && broj_bodova <= 54)
		printf("Ocjena je: 2\n");
	else if (broj_bodova >= 55 && broj_bodova <= 69)
		printf("Ocjena je: 3\n");
	else if (broj_bodova >= 70 && broj_bodova <= 84)
		printf("Ocjena je: 4\n");
	else if (broj_bodova >= 85 && broj_bodova <= 100)
		printf("Ocjena je: 5\n");
	else
		printf("Greska, broj bodova mora biti u rasponu od 0-100");


	getchar();
	getchar();
	return 0;
}
