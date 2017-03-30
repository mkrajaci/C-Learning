/*Napisati funkciju èiji je prototip: int NulBitova(char znak).
Funkcija treba prebrojiti koliko je bitova u ulaznom znaku postavljeno na 0.
Npr. znak 'A' ima ASCII vrijednost 65, a to je 01000001 u binarnom zapisu. Funkcija bi za
znak 'A' dakle trebala vratiti 6 jer je toliko nula u binarnom prikazu tog znaka.
Napomena: koristiti bitovne operatore.*/

#include <stdio.h>

int main(void)
{
	char znak;
	int ascii;

	printf("Upisite jedan znak: ");
	scanf_s(" %c", &znak);
	ascii = znak;

	printf("%d", ascii);


	getchar();
	getchar();

	return 0;
}