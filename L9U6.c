/*Napisati funkciju koja æe primiti jedan string i ispisati samo njegovu prvu reèenicu. 
Reèenica je niz znakova koji završava jednim od tri interpunkcijska znaka (. ? !).*/
#include <stdio.h>
#include <string.h>
void funkcija(char *text);
int main(void)
{
	char tekst[1000];
	gets(tekst);
	funkcija(tekst);
	getchar();
	getchar();
	return 0;
}
void funkcija(char *text)
{
	char znakovi_interpunkcije[] = ".?!";
	puts(strtok(text, znakovi_interpunkcije));
}