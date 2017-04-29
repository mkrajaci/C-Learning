/*Ucitajte od korisnika jedno ime, te ukoliko je uneseno ime identicno vasem ispisite poruku "Tocno".*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char text_od_korisnika[30], moje_ime[] = "mario";
	gets(text_od_korisnika);
	if (strcmp(text_od_korisnika, moje_ime) == 0)
		printf("Tocno ");
	getchar();
	getchar();
	return 0;
}