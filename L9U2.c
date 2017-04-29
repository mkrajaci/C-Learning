/*Ucitati jednu liniju teksta od korisnika i ispisati je unatraske.*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char text[1000];
	gets(text);
	for (int brojac = strlen(text)-1; brojac >= 0; --brojac)
		printf("%c", text[brojac]);
	getchar();
	getchar();
	return 0;
}