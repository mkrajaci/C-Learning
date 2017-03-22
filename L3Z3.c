#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int uneseni_broj, prva_kocka = 0, druga_kocka = 0, brojac;
	srand(time(NULL));

	printf("unesite jedan broj\n");
	scanf_s("%d", &uneseni_broj);

	for (brojac = 1; prva_kocka + druga_kocka != uneseni_broj; brojac = brojac + 1)
	{
		prva_kocka = rand() % 6 + 1;
		druga_kocka = rand() % 6 + 1;
	}

	printf("Brojevi na kockama su: %d %d iz broja pokusaja %d", prva_kocka, druga_kocka, brojac);

	getchar();
	getchar();

	return 0;
}