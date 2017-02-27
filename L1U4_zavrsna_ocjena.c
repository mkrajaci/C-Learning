/*Odreðivanje završne ocjene prema unesenom broju bodova*/

#include <stdio.h>

int main(void)
{
	int brojBodova;

	printf("Unesite broj ostvarenih bodova:\n");
	scanf("%d", &brojBodova);

	if(brojBodova<=0 && brojBodova<=39);
		printf("Zavrsna ocjena je: 1\n");
	if(brojBodova>0 && brojBodova>39);
	printf("greska");

	getchar();
	getchar();


	return 0;
}