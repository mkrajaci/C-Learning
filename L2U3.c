/*Ucitajte od korisnika dva prirodna broja i ispisite sve brojeve izmedju njih (pretpostavite da je uvijek prvi broj manji od drugog).*/

#include <stdio.h>

int main(void)
{
	unsigned prvi_broj, drugi_broj;
	printf("Unesite jedan broj:\n");
	scanf_s("%u", &prvi_broj);
	printf("Unesite drugi broj:\n");
	scanf_s("%u", &drugi_broj);
	unsigned interval = prvi_broj;
	
	for (; interval < drugi_broj; interval = interval + 1)
	{
		printf("\n%u\n", interval);
	}

	getchar();
	getchar();
	return 0;
}

