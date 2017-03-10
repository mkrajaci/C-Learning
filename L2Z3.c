/*Uèitati od korisnika dva prirodna broja te ispisati „Da“ ukoliko su oni relativno prosti, a
„Ne“ inaèe.
Dva broja su relativno prosta ukoliko nemaju zajednièkih djelitelja osim broja 1 (npr. 8 i 9,
15 i 16, 21 i 15 itd.)*/

#include <stdio.h>

int main(void)
{
	int prvi_broj, drugi_broj, prosti_prvi=1, prosti_drugi=1, brojac, manji, flag = 0;

	printf("Unesite jedan broj:\n");
	scanf_s("%d", &prvi_broj);
	printf("unesite drugi broj:\n");
	scanf_s("%d", &drugi_broj);

	if (prvi_broj < drugi_broj)
		manji = prvi_broj;
	else manji = drugi_broj;
	

	for (brojac = 2; brojac <= manji; brojac = brojac + 1)
	{
		if (prvi_broj % brojac == 0 && drugi_broj % brojac == 0)
			flag = 1;
			
	}
	
	if (flag == 1)
		printf("Nisu");
	else printf("Jesu");

	getchar();
	getchar();
	
	return 0;

}