/*Napi�ite funkciju koja �e primiti jedan string te vratiti 1 ukoliko je on oblika 
wwr, a 0 ina�e.
Npr.
abcddcba
abba
101101
Napomena: sami implementirati potrebne funkcije za rad sa stringovima (npr. funkcija za
ra�unanje du�ine).*/
#include <stdio.h>
int revers_funkcija(char *moj_string);
int funkcija_duzine(char *moj_string);
int main(void)
{
	char *niz = { "abcddcba" };

//	char *niz = { "abcdcba" };       niz za testiranje ispravnosti programa
	printf("%d", revers_funkcija(niz));
	getchar();
	getchar();
	return 0;
}

int revers_funkcija(char *moj_string)	//provjera je su li slova identicna (dok brojaci dodju jedan do drugog)
{
	int brojac_prvi, brojac_drugi;
	int duzina_stringa;
	duzina_stringa = funkcija_duzine(moj_string);
	if (!(duzina_stringa % 2))
		for (brojac_prvi = 0, brojac_drugi = duzina_stringa; brojac_prvi >= brojac_drugi; ++brojac_prvi, --brojac_drugi)
		{
			if (!(moj_string[brojac_prvi] == moj_string[brojac_drugi]))
				return 0;
			else return 1;
		}
}
int funkcija_duzine(char *moj_string)		//prebrojavanje clanova u stringu
{
	int brojac;
	for (brojac = 0; moj_string[brojac] != '\0'; ++brojac)
		;
	return brojac + 1;
}