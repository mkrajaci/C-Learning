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
     char najcesce_slovo=0;
	char niz[] = "OvO Je NeKa ReCENIca";
//	gets(niz);
	puts(niz);
	printf("Nakon izmjene: ");
	funkcija_zamjene_slova(niz);
	puts(niz);
	najcesce_slovo=funkcija_najcesce_slovo(niz);
     printf("Najcesce se pojavljuje slovo %c", najcesce_slovo);
	getchar();
	getchar();
	return 0;
}
void funkcija_zamjene_slova(char *niz)
{
	int brojac_niza = 0;
	for (; niz[brojac_niza] != '\0'; ++brojac_niza)
	{
		if(isupper (niz[brojac_niza]))
			niz[brojac_niza] = 'a' + (rand() % 26);	//random mala slova
	}
}
char funkcija_najcesce_slovo(char *niz)
{
     int max=0, index=0;
	int brojac_slova = 0, slovo = 0;
     int niz_brojaca[26]={0};
	for (; brojac_slova<strlen(niz); ++brojac_slova)
	{
         if(isalpha(*niz))              //provjeravam je li slovo u nizu
         {
         slovo = niz[brojac_slova]-'a'; //otkrivam koje se slovo nalazi u nizu
         ++niz_brojaca[slovo];
         }
	}
     for (brojac_slova=0; brojac_slova<26; ++brojac_slova)
     {
          if (niz_brojaca[brojac_slova]>max) //trazim slovo koje se najcesce pojavljuje preko brojaca slova
          {
               max=niz_brojaca[brojac_slova];
               index=brojac_slova;
          }
     }
	return 'a'+index;
}
