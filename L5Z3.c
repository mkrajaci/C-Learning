/*Harshadovi brojevi su svi pozitivni prirodni brojevi koji su djeljivi sa sumom svojih
znamenki (npr. 24 koji je djeljiv sa 6, a koji je suma znamenaka 2 i 4).
Uèitajte od korisnika jedan broj N te ispišite sve Harshadove brojeve <=N.*/

#include <stdio.h>

int main(void)
{
	int uneseni_broj, n, znamenka, suma_znamenki, brojac_vanjski, brojac;

	printf("Molim unesite jedan broj: ");
	scanf_s("%d", &uneseni_broj);

	n = uneseni_broj;

	while (n)
	{
		for (brojac = 0, suma_znamenki = 0, znamenka = 0; brojac <= uneseni_broj; ++brojac)
		{
			znamenka = uneseni_broj % 10;		/*odredivanje znamenke*/
			uneseni_broj /= 10;					/*pomicanje unesenog broja na sljedecu znamenku*/
			suma_znamenki += znamenka;			/*dodavanje znamenke u sumu znamenki*/
		}

		if (n % suma_znamenki == 0)				/*Ako je broj djeljiv sa sumom znamenki, ispise ga*/
			printf("%d ", n);

		--n;
		uneseni_broj = n;
	}
	getchar();
	getchar();

	return 0;
}
