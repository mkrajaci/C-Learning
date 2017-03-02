/*Bankomat*/

#include <stdio.h>

int main(void)
{
	int novaca, apoen_50, apoen_20, apoen_5, apoen_2, apoen_1;

	printf("Unesite iznos za isplatu\n");
	scanf_s("%d", &novaca);

	apoen_50 = novaca / 50;
	printf("Broj novcanica od 50 kn: %d\n", apoen_50);
	apoen_20 = apoen_50 / 20;
	printf("Broj novcanica od 20 kn: %d\n", apoen_20);




	getchar();
	getchar();
	return 0;

}