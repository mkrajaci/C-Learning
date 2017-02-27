/*Ispišite sumu dva broja*/

#include <stdio.h>

int main(void)
{
	int prviBroj, drugiBroj, suma;

	printf("Unesite dva broja za zbrajanje\n");
	scanf_s("%d %d", &prviBroj, &drugiBroj);

	suma = prviBroj + drugiBroj;

	if(suma<100)
		printf("Zbroj je: %d\n", suma);
	else printf("Velika suma\n");

	getchar();
	getchar();

	return 0;
}
