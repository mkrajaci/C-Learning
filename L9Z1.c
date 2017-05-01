/*Napisati funkciju koja æe u zadanom stringu zamijeniti sva velika slova sa sluèajno odabranim malim slovima.
Napisati funkciju koja primi string te odredi koje se slovo najèešæe pojavljuje unutar stringa te koja vraæa to slovo. 
Ukoliko se više slova pojavljuje jednak broj puta vratiti ono koje se nalazi prije u abecednom poretku.
Uèitati string od korisnika te ga uz pomoæ kreiranih funkcija izmijeniti (ispisati ga nakon izmjene) 
te ispisati koje se slovo najèešæe pojavljuje.*/
//prvo zamjeni velika slova malima, pa onda dalje.

#include <stdio.h>
#include <string.h>
void funkcija_zamjene_slova(char *niz);
char funkcija_najcesce_slovo(char *niz);
int main(void)
{
	char slovo;
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
		for (brojac_slova = 'A'; brojac_slova <= 'Z'; ++brojac_slova)
		{
			if (niz[brojac_niza] == brojac_slova)
			{
				niz[brojac_niza] = 'a' + (rand() % 26);	//random mala slova
				break;
			}
		}
	}
}
char funkcija_najcesce_slovo(char *niz)
{
	char najcesce_slovo = 0;
	int brojac_slova = 0;
	int brojac_niza = 0;
	int duzina_stringa;
	duzina_stringa = strlen(niz);
	for (; niz[brojac_niza] != '\0'; ++brojac_niza)
	{	
		brojac_slova = duzina_stringa;
		for (; brojac_niza <= brojac_slova; --brojac_slova)
		{
			if (niz[brojac_niza] == niz[brojac_slova])
			{
				najcesce_slovo = niz[brojac_niza];
			}
		}
	}
	return najcesce_slovo;
}