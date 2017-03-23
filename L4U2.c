
/*Napisati funkciju koja primi jedan realan broj, te kao povratnu vrijednost vrati samo vrijednost iza decimalne tocke.
Npr. za 3.14159 treba vratiti 0.14159, za 2.71 povratna vrijednost treba biti 0.71 itd.*/

#include <stdio.h>

float funkcija(float uneseni_broj)

{
	int pomocna_varijabla;

	pomocna_varijabla = uneseni_broj;
	uneseni_broj = uneseni_broj - pomocna_varijabla;

	return uneseni_broj;

}


int main(void)
{
	float uneseni_broj = 0.0;
	
	printf("Unesite jedan realni broj: ");
	scanf_s("%f", &uneseni_broj);

	funkcija(uneseni_broj);

	printf("%f\n", funkcija(uneseni_broj));
	
	getchar();
	getchar();

	return 0;

}