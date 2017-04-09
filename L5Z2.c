/*Napisati funkciju koja æe primiti cijeli broj veæi od nule te odvojiti znamenke djeljive s 3 i
one koje to nisu u dva odvojena broja.
Primjer: broj 13597 treba pretvoriti u brojeve 157 i 39.
Funkcija brojeve treba vratiti glavnom programu koji ih onda ispisuje.*/

#include <stdio.h>
#include <math.h>

void funkcija_za_povrat_brojeva(int uneseni_broj, int *djeljiv, int *nije_djeljiv);

int main(void)
{
	int uneseni_broj, djeljiv, nije_djeljiv;

	printf("Unesite jedan cijeli broj: ");
	scanf_s("%d", &uneseni_broj);

	funkcija_za_povrat_brojeva(uneseni_broj, &djeljiv, &nije_djeljiv);	/*funkciji proslijeðujem uneseni broj i dva pointera*/
	printf("%d %d", nije_djeljiv, djeljiv);								/*èitam što je funkcija zapisala na adresama pointera*/

	getchar();
	getchar();
	return 0;
}
void funkcija_za_povrat_brojeva(int uneseni_broj, int *djeljiv, int *nije_djeljiv)	
{																					
	int znamenka, brojac, brojac_djeljiv = 0, brojac_nije_djeljiv = 0;
	*djeljiv = 0, *nije_djeljiv = 0;
	brojac = 0;
	while (uneseni_broj)
	{
		znamenka = uneseni_broj % 10;
		uneseni_broj /= 10;

		if (znamenka % 3 == 0)
		{
			*djeljiv += (pow(10, brojac_djeljiv) * znamenka);
			++brojac_djeljiv;
		}
		else
		{
			*nije_djeljiv += (pow(10, brojac_nije_djeljiv) * znamenka);
			++brojac_nije_djeljiv;
		}
		++brojac;
	}
	return 0;
}