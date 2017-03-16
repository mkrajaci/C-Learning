/*Napišite funkciju koja primi jedan prirodni broj, te ispiše sve prirodne brojeve manje od njega.*/

#include <stdio.h>

void ispis(unsigned uneseni_broj)

{
	int brojac = uneseni_broj - 1;

	while (brojac >= 0)
	{
		printf("%u\n", brojac);
		brojac = brojac - 1;
	}
}

int main(void)
{
	unsigned korisnikov_broj;
	printf("Unesite jedan prirodni broj:\n");
	scanf_s("%u", &korisnikov_broj);
	ispis(korisnikov_broj);

	getchar();
	getchar();

	return 0;
}