/*Napisati program koji æe od korisnika uèitati dva pozitivna cijela broja te provjeriti da li im
je suma znamenki jednaka i u skladu s tim ispisati odgovarajuæi poruku.
Npr.
- Za brojeve 123 i 33 potrebno je ispisati: „Brojevi 123 i 33 imaju isti zbroj znamenki i
on iznosi 6“.
(jer je 1+2+3= 6 i 3+3=6)
- Za brojeve 123 i 58 potrebno je ispisati „Brojevi 123 i 58 nemaju isti zbroj
znamenki“.*/

#include <stdio.h>

int main(void)
{
	unsigned prvi_broj, unesen_prvi_broj, drugi_broj, unesen_drugi_broj, znamenke_prvog_broja, znamenke_drugog_broja, zbroj_prvog_znamenke = 0, zbroj_drugog_znamenke = 0;
	
	printf("Unesite prvi pozitivan cijeli broj:\n");
	scanf_s("%u", &prvi_broj);
	unesen_prvi_broj = prvi_broj;
	printf("Unesite drugi pozitivan cijeli broj:\n");
	scanf_s("%u", &drugi_broj);
	unesen_drugi_broj = drugi_broj;


	for (; prvi_broj > 0; prvi_broj = prvi_broj / 10)
	{
		znamenke_prvog_broja = prvi_broj % 10;
															/*printf("znamenka prvog broja je: %u\n", znamenke_prvog_broja);*/
		zbroj_prvog_znamenke = zbroj_prvog_znamenke + znamenke_prvog_broja;
	}

															/*printf("suma znamenki je: %u\n", zbroj_prvog_znamenke);*/

	for (; drugi_broj > 0; drugi_broj = drugi_broj / 10)
	{
		znamenke_drugog_broja = drugi_broj % 10;
															/*printf("znamenka drugog broja je: %u\n", znamenke_drugog_broja);*/
		zbroj_drugog_znamenke = zbroj_drugog_znamenke + znamenke_drugog_broja;
	}

															/*printf("suma znamenki je: %u\n", zbroj_drugog_znamenke);*/

	if (zbroj_prvog_znamenke == zbroj_drugog_znamenke)
		printf("Brojevi %u i %u imaju isti zbroj znamenki i	on iznosi %u\n", unesen_prvi_broj, unesen_drugi_broj, zbroj_prvog_znamenke);
	else
		printf("Brojevi %u i %u nemaju isti zbroj znamenki.\n", unesen_prvi_broj, unesen_drugi_broj);

	getchar();
	getchar();
	
	return 0;

}