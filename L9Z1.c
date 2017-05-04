/*Napisati funkciju koja ce u zadanom stringu zamijeniti sva velika slova sa slucajno odabranim malim slovima.
Napisati funkciju koja primi string te odredi koje se slovo najcesce pojavljuje unutar stringa te koja vraca to slovo.
Ukoliko se vise slova pojavljuje jednak broj puta vratiti ono koje se nalazi prije u abecednom poretku.
Ucitati string od korisnika te ga uz pomoc kreiranih funkcija izmijeniti (ispisati ga nakon izmjene)
te ispisati koje se slovo najcesce pojavljuje.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void funkcija_zamjene_slova(char *niz);
char funkcija_najcesce_slovo(char *niz);
int main(void)
{
	char niz[] = "OvO Je NeKa ReCENIca";
//	gets(niz);
	puts(niz);
	printf("Nakon izmjene: ");
	funkcija_zamjene_slova(niz);
	puts(niz);
	putchar(funkcija_najcesce_slovo(niz));
	getchar();
	getchar();
	return 0;
}
void funkcija_zamjene_slova(char *niz)
{
	char brojac_slova;
	int brojac_niza = 0;
	for (; niz[brojac_niza] != '\0'; ++brojac_niza)
	{
		if(isupper (niz[brojac_niza]))
			niz[brojac_niza] = 'a' + (rand() % 26);	//random mala slova
	}
}
char funkcija_najcesce_slovo(char *niz)
{
	char najcesce_slovo = 0;
	int brojac_slova = 0;
	int *niz_brojaca;
	niz_brojaca = calloc(26, sizeof(int));
	for (; *niz != '\0'; ++niz)
	{
		if (!isspace(*niz))
		{
			char *pokazivac = "abcdefghijklmnoprstuvzyx";
			for (brojac_slova; pokazivac[brojac_slova] != '\0'; ++brojac_slova)
			{
				if (*pokazivac == *niz)
				{
					//ovdje dobijem slovo koje se ponavlja, sto dalje
				}
			}
		}
	}
	return najcesce_slovo;
}