/*Bankomat*/

#include <stdio.h>

int main(void)
{
	int novaca, apoen_50, apoen_20, apoen_5, apoen_2, apoen_1, razlika;

	printf("Unesite iznos za isplatu\n");
	scanf_s("%d", &novaca);

	apoen_50 = novaca / 50;
	printf("Broj novcanica od 50 kn: %d\n", apoen_50);
	razlika = novaca % 50;
	apoen_20 = razlika / 20;
	printf("Broj novcanica od 20 kn: %d\n", apoen_20);
	razlika = razlika % 20;
	apoen_5 = razlika / 5;
	printf("Broj kovanica od 5 kn: %d\n", apoen_5);
	razlika = razlika % 5;
	apoen_2 = razlika / 2;
	printf("Broj kovanica od 2 kn: %d\n", apoen_2);
	razlika = razlika % 2;
	apoen_1 = razlika / 1;
	printf("Broj kovanica od 1 kn: %d\n", apoen_1);
	razlika = razlika % 1;


	getchar();
	getchar();
	return 0;

}