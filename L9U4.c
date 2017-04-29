/*Napisati funkciju koja ce dinamicki alocirati string dovoljno dugacak za pohranu vaseg imena i prezimena, 
pravilno ga inicijalizirati (Ime<razmak>Prezime), te vratiti kao povratnu vrijednost funkcije.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char funkcija();
int main(void)
{
	funkcija();
	getchar();
	getchar();
	return 0;
}
char funkcija()
{
	char string_ime[100] = "mario", string_prezime[100] = "krajacic";
	char *string;
	int duzina = 0;
	duzina = strlen(string_ime) + strlen(string_prezime) + 1;
	string = malloc(duzina*sizeof(char));
	return string;
}