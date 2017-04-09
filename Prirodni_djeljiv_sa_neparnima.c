/* 2015-09-22-ispit
Izraèunati i ispisati na zaslon prvi prirodni broj koji je djeljiv sa barem 15 neparnih brojeva.
*/
#include <stdio.h>
int main(void)
{
	int broj = 1, brojac_neparnih = 0, brojac = 1;
	for (; brojac_neparnih <= 15; ++broj)
	{
		for (brojac = 1, brojac_neparnih = 0; brojac <= broj; brojac = brojac + 2)
		{
			if (broj % brojac == 0)
				++brojac_neparnih;
		}
	}
	printf("%d", broj);
	getchar();
	getchar();
	return 0;
}