/*Skladni brojevi su oni prirodni brojevi koji imaju jednak broj parnih i neparnih djelitelja
(ne ra�unaju�i 1 i njih same, djelitelja mora biti barem 2).
Npr.
6: djelitelji su 3 i 2 (po jedan parni i neparni djelitelj)
10: djelitelji su 5 i 2 (po jedan parni i neparni djelitelj)
18: djelitelji su 9, 6, 3 i 2 (po dva parna i dva neparna djelitelja)
Ispi�ite sve skladne brojeve manje od 1000.

Mogu�i koraci rje�avanja:
U�itajte samo jedan broj od korisnika i ispi�ite sve njegove djelitelje.
Nakon ispisa svih djelitelja ispi�ite koliko je bilo parnih, a koliko neparnih.
Ispi�ite jo� i "Skladan" ukoliko une�eni broj ima jednak broj parnih i neparnih djelitelja.
Zamijenite unos od korisnika sa iteracijom kroz prvih 1000 prirodnih brojeva i ispi�ite samo one koji su skladni.*/
#include <stdio.h>
int main(void)
{
	int broj, brojac, brojac_parnih, brojac_neparnih, brojac_do_1000, djeljitelj;
	
	brojac_do_1000 = 0;
	while (brojac_do_1000 <= 1000)		/*Ova vanjska petlja ispisuje prvih 1000 skladnih brojeva*/
	{
		broj = brojac_do_1000;
		brojac = 2, brojac_parnih = 0, brojac_neparnih = 0;
		while (brojac < broj)			/*Ova unutarnja odre�uje djeljitelje*/
		{
			if (broj % brojac == 0)
			{
				djeljitelj = brojac;
				if (djeljitelj % 2 == 0)/*Ovaj uvjetni izraz broji koliko je parnih i neparnih*/
					++brojac_parnih;
				else
					++brojac_neparnih;
			}
			++brojac;
		}
		if (brojac_parnih > 0)			/*Osigurac za brojeve koji nemaju dijeljitelja*/
		{
			if (brojac_parnih == brojac_neparnih)
				printf("%d ", broj);	/*Ispis trazenih brojeva*/
		}
		++brojac_do_1000;
	}
	getchar();
	getchar();
	return 0;
}