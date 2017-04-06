/*Konzervativni nizovi su oni nizovi cijelih brojeva koji poèinju s 1, 
a svaki iduæi èlan im je ili toèno za jedan veæi od njemu direktno prethodnog
ili je identièan nekom (bilo kojem) prethodnom èlanu niza.
Npr. niz: 1, 1, 2, 3, 4, 2, 4 jest konzervativan
dok niz: 1, 2, 3, 3, 1, 2, 4, 5 nije jer èlan s vrijednošæu 4 nije niti za jedan veæi od njemu direktno prethodnog 
(2) niti se ranije pojavljivao u nizu.
Napišite funkciju koja prima jedan niz cijelih brojeva te vrati 1 ako je on konzervativan, a 0 inaèe.*/
#include <stdio.h>

int main(void)
{
	int niz[7] = { 1, 1, 2, 3, 4, 2, 4 };
	
	funkcija_je_li_konzervativan_niz(niz, 7);

	getchar();
	getchar();

	return 0;
}
int funkcija_je_li_konzervativan_niz(int *niz, int duljina)
{


}