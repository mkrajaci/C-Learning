/*Napisati program koji æe od korisnika uèitati dva pozitivna cijela broja te provjeriti da li im
je suma znamenki jednaka i u skladu s tim ispisati odgovarajuæi poruku.
Npr.
- Za brojeve 123 i 33 potrebno je ispisati: „Brojevi 123 i 33 imaju isti zbroj znamenki i
on iznosi 6“.
(jer je 1+2+3= 6 i 3+3=6)
- Za brojeve 123 i 58 potrebno je ispisati „Brojevi 123 i 58 nemaju isti zbroj
znamenki“.*/

#include <stdio.h>

void funkcija(int prvi_ucitani_broj, int drugi_ucitani_broj)
{
	int znamenka_1, znamenka_2, zbroj_znamenki_prvog_broja = 0, zbroj_znamenki_drugog_broja = 0, brojac_1=0, brojac_2=0, prvi_broj, drugi_broj;

	prvi_broj = prvi_ucitani_broj;
	drugi_broj = drugi_ucitani_broj;

	for (; prvi_ucitani_broj > 0;)
	{
		znamenka_1 = prvi_ucitani_broj % 10;
		zbroj_znamenki_prvog_broja = zbroj_znamenki_prvog_broja + znamenka_1;
		prvi_ucitani_broj = prvi_ucitani_broj / 10;
	}

	for (; drugi_ucitani_broj > 0;)
	{
		znamenka_2 = drugi_ucitani_broj % 10;
		zbroj_znamenki_drugog_broja = zbroj_znamenki_drugog_broja + znamenka_2;
		drugi_ucitani_broj = drugi_ucitani_broj / 10;
	}
	if (zbroj_znamenki_prvog_broja == zbroj_znamenki_drugog_broja)
	{
		printf("Brojevi %d i %d imaju isti zbroj znamenki i on iznosi %d", prvi_broj, drugi_broj, zbroj_znamenki_prvog_broja);
	}
	else printf("Brojevi %d i %d nemaju isti zbroj znamenki", prvi_broj, drugi_broj);
}


int main(void)
{
	int prvi_ucitani_broj, drugi_ucitani_broj;
	
	printf("Upisite dva broja ");
	scanf_s("%d %d", &prvi_ucitani_broj, &drugi_ucitani_broj);

	funkcija(prvi_ucitani_broj, drugi_ucitani_broj);

	getchar();
	getchar();

	return 0;
}