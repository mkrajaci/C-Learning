/*Napisati funkciju koja �e primiti jedan string i ispisati samo njegovu prvu re�enicu. 
Re�enica je niz znakova koji zavr�ava jednim od tri interpunkcijska znaka (. ? !).*/
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