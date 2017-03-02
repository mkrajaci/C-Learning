/*Izraèun kvadrata dva broja*/

#include <stdio.h>

int main(void)
{
	int broj;

	printf("Molim vas upišite jedan broj:\n");
	scanf_s("%d", &broj);
									/*Ako je broj pozitivan ispisati æe dupli broj od unesenog, a ako je negativan onda kvadrat, za nulu - nula*/
	if (broj > 0)
		printf("Dupli broj od upisanog %d je: %d", broj, broj*2);
	else if (broj < 0)
		printf("Kvadrat upisanog broja %d je: %d", broj, broj*broj);
	else
		printf("nula");

	getchar();
	getchar();
	return 0;

}