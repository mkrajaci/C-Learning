/*Napišite funkciju koja primi jedan cijeli broj, te vrati -1 ukoliko je on negativan, 1 ukoliko je pozitivan, a 0 ukoliko je broj jednak nuli.*/

#include <stdio.h>

int kakav_je_broj(int uneseni_broj)
{
	if (uneseni_broj < 0)
		return -1;
	else if (uneseni_broj == 0)
		return 0;
	else if (uneseni_broj > 0)
		return 1;
}

int main(void)
{
	int korisnikov_broj;

	printf("Unesite jedan broj\n");
	scanf_s("%d", &korisnikov_broj);

	printf("%d", kakav_je_broj(korisnikov_broj));

	getchar();
	getchar();

	return 0;
}