/*Dva jednoznamenkasta broja spojiti i ispisati njihov parni broj*/

#include <stdio.h>

int main(void)
{
	int prva_znamenka, prva_znamenka_zamjena, druga_znamenka, druga_znamenka_zamjena, ukupno, ukupno_zamjena;

	printf("Unesite dva jednoznamenkasta broja:\n");
	scanf_s("%d %d", &prva_znamenka, &druga_znamenka);
	if (prva_znamenka < 10 && druga_znamenka < 10) {
		prva_znamenka_zamjena = druga_znamenka;
		druga_znamenka_zamjena = prva_znamenka;

		ukupno = (prva_znamenka * 10) + druga_znamenka;
		ukupno_zamjena = (prva_znamenka_zamjena * 10) + druga_znamenka_zamjena;

		if (ukupno % 2 == 0)
			printf("Parni brojevi su %d", ukupno);
		else if (ukupno_zamjena % 2 == 0)
			printf("Parni brojevi su %d", ukupno_zamjena);
		else
			printf("nema parnog broja");
	}
	else
		printf("Niste unijeli jednoznamenkaste brojeve");
	
	getchar();
	getchar();
	return 0;
}