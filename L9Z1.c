/*Napisati funkciju koja �e u zadanom stringu zamijeniti sva velika slova sa slu�ajno odabranim malim slovima.
Napisati funkciju koja primi string te odredi koje se slovo naj�e��e pojavljuje unutar stringa te koja vra�a to slovo. 
Ukoliko se vi�e slova pojavljuje jednak broj puta vratiti ono koje se nalazi prije u abecednom poretku.
U�itati string od korisnika te ga uz pomo� kreiranih funkcija izmijeniti (ispisati ga nakon izmjene) 
te ispisati koje se slovo naj�e��e pojavljuje.*/
#include <stdio.h>
#include <string.h>
char funkcija_najcesce_slovo(char *niz);
void funkcija_zamjene_slova(char *niz);
int main(void)
{
	char slovo;
	char niz[] = "OvO Je NeKa ReCENIca";
//	gets(niz);
	putchar(funkcija_najcesce_slovo(niz));
	getchar();
	getchar();
	return 0;
}
char funkcija_najcesce_slovo(char *niz)
{
	char brojac_slova;
	int brojac_niza = 0;
	char najcesce_veliko_slovo, najcesce_malo_slovo;
	for (; niz[brojac_niza] != '\0'; ++brojac_niza)
	{
		for (brojac_slova = 'Z'; brojac_slova >= 'A'; --brojac_slova)
			if (niz[brojac_niza] == brojac_slova)
			{
				najcesce_veliko_slovo = brojac_slova;
				break;
			}
	}
	return najcesce_veliko_slovo;
}
void funkcija_zamjene_slova(char *niz)
{

}