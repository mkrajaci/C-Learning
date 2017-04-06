/*Konzervativni nizovi su oni nizovi cijelih brojeva koji poèinju s 1,
a svaki iduæi èlan im je ili toèno za jedan veæi od njemu direktno prethodnog
ili je identièan nekom (bilo kojem) prethodnom èlanu niza.
Npr. niz: 1, 1, 2, 3, 4, 2, 4 jest konzervativan
dok niz: 1, 2, 3, 3, 1, 2, 4, 5 nije jer èlan s vrijednošæu 4 nije niti za jedan veæi od njemu direktno prethodnog
(2) niti se ranije pojavljivao u nizu.
Napišite funkciju koja prima jedan niz cijelih brojeva te vrati 1 ako je on konzervativan, a 0 inaèe.*/
#include <stdio.h>
int funkcija_je_li_konzervativan_niz(int *niz, int duljina);
int main(void)
{
	int niz[] = { 1, 1, 2, 3, 4, 2, 4 };
	int koliko_je_brojeva_u_nizu = sizeof(niz) / sizeof(niz[0]);	
	if (funkcija_je_li_konzervativan_niz(niz, koliko_je_brojeva_u_nizu))
		printf("Konzervativan");
	else
		printf("Nije konzervativan");
/*
	int niz[] = { 1, 2, 4, 5 };
	int koliko_je_brojeva_u_nizu = sizeof(niz) / sizeof(niz[0]);
	if (funkcija_je_li_konzervativan_niz(niz, koliko_je_brojeva_u_nizu))
		printf("Konzervativan");
	else
		printf("Nije konzervativan");
*/
	getchar();
	getchar();

	return 0;
}
int funkcija_je_li_konzervativan_niz(int *niz, int duljina)
{
	int konzervativan = 0;
	int brojac1 = 1;
	if (niz[0] != 1)
	{
		return 0;
	}
	while (brojac1 < duljina)
	{
		if (!(niz[brojac1] - 1 == niz[brojac1 - 1]))
		{
			int brojac2 = 0;
			while (brojac2 < brojac1)
			{
				konzervativan = 0;
				if (niz[brojac2] == niz[brojac1])
				{
					konzervativan = 1;
					break;
				}
				++brojac2;
			}
			if (konzervativan == 0)
			return 0;
		}		
		++brojac1;
	}
	return 1;
}