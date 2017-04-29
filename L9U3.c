/*Ucitati od korisnika dvije linije teksta (u dvije odvojene varijable), te im zamijeniti vrijednosti.*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char string1[1000], string2[1000], pomocni[1000];
	gets(string1);
	gets(string2);
	strcpy(pomocni, string2);
	strcpy(string2, string1);
	puts(pomocni);
	puts(string2);
	getchar();
	getchar();
	return 0;
}