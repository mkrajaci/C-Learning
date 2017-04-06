/*Napisati funkciju koja prima niz cijelih brojeva i ispisuje sve elemente niza koji su veæi od sume svojih prethodnika.
Npr. za niz: -6, 5, 3, 12, 7, -20, 10, -2 funkcija treba ispisati brojeve: -6, 5, 3, 12, 10.
Rad funkcije testirati pozivom iz glavnog programa.*/
#include <stdio.h>
void funkcija_veci_od_sume_svojih_prethodnika(int *niz, int duljina);
int main(void)
{
	int niz[] = { -6, 5, 3, 12, 7, -20, 10, -2 };
	int koliko_je_brojeva_u_nizu = sizeof(niz) / sizeof(niz[0]);
	funkcija_veci_od_sume_svojih_prethodnika(niz, koliko_je_brojeva_u_nizu);
	getchar();
	getchar();
	return 0;
}
void funkcija_veci_od_sume_svojih_prethodnika(int *niz, int duljina)
{
	int suma = niz[0], brojac = 0;	/*Postavljanje sume na vrijednost prvog clana niza*/
	while (brojac < duljina)
	{	
		if (niz[brojac] >= suma)	/*Provjera svakog clana niza u odnosu na sumu*/
		{
			printf("%d ", niz[brojac]);
		}
		suma += niz[brojac];		/*Sumiranje svih clanova niza*/
		++brojac;
	}
}