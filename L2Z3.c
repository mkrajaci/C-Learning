/*Uèitati od korisnika dva prirodna broja te ispisati „Da“ ukoliko su oni relativno prosti, a
„Ne“ inaèe.
Dva broja su relativno prosta ukoliko nemaju zajednièkih djelitelja osim broja 1 (npr. 8 i 9,
15 i 16, 21 i 15 itd.)*/

#include <stdio.h>

int main(void)
{
	int prvi_broj, drugi_broj, prosti_prvi, prosti_drugi;

	printf("Unesite jedan broj:\n");
	scanf_s("%d", &prvi_broj);
	printf("unesite drugi broj:\n");
	scanf_s("%d", &drugi_broj);

	prosti_prvi = prvi_broj / drugi_broj;
	prosti_drugi = drugi_broj / prvi_broj;
	
	if (prosti_prvi == 0 != prosti_drugi == 0)
		printf("Da");
	else printf("Ne");

	getchar();
	getchar();
	
	return 0;

}