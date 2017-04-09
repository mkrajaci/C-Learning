/*Napisati funkciju èiji je prototip: int NulBitova(char znak).
Funkcija treba prebrojiti koliko je bitova u ulaznom znaku postavljeno na 0.
Npr. znak 'A' ima ASCII vrijednost 65, a to je 01000001 u binarnom zapisu. Funkcija bi za
znak 'A' dakle trebala vratiti 6 jer je toliko nula u binarnom prikazu tog znaka.
Napomena: koristiti bitovne operatore.*/

#include <stdio.h>

int main(void)
{
	char znak;
	int koliko_nula;

	printf("Upisite jedan znak: ");
	scanf(" %c", &znak);

	koliko_nula = NulBitova(znak);
	
	printf("Broj 0 je: %d", koliko_nula);
	
	getchar();
	getchar();

	return 0;
}

int NulBitova(char znak)
{
	int brojac = 0, koliko_nula = 0;
	while (brojac < 8)
	{
		if (!(znak >> brojac & 1))
		{
			++koliko_nula;
		}
		++brojac;
	}
	return koliko_nula;
}