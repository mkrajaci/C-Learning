/*Napisati funkciju koja æe primiti odvojeno vaše ime i prezime (kao dva parametra), 
te ih spojiti u novoalocirani string u pravilnom formatu (Ime<razmak>Prezime), 
te vratiti kao povratnu vrijednost funkcije.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *funkcija(char *ime, char *prezime);
int main(void)
{
	char ime[20] = "Mario", prezime[20]="Krajacic";
	puts(funkcija(ime, prezime));
	getchar();
	getchar();
	return 0;
}
char *funkcija(char *ime, char *prezime)
{
	char *novi_string;
	novi_string = malloc(strlen(ime) + strlen(prezime) + 1);
	strcpy(novi_string, ime);
	strcat(novi_string, prezime);
	return novi_string;
}