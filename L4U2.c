/*Napisati funkciju koja primi jedan realan broj, te kao povratnu vrijednost vrati samo vrijednost iza decimalne toèke.
Npr. za 3.14159 treba vratiti 0.14159, za 2.71 povratna vrijednost treba biti 0.71 itd.*/

#include <stdio.h>
/*
float funkcija(float uneseni_broj);

{


}
*/

int main(void)
{
	float uneseni_broj = 0.0;
	
	printf("Unesite jedan realni broj: ");
	scanf_s("%f", &uneseni_broj);

	uneseni_broj = (float) uneseni_broj % 10;
	
	printf("%f", uneseni_broj);


	getchar();
	getchar();

	return 0;

}