/*Izra�un kvadrata dva broja*/

#include <stdio.h>

int main(void)
{
	int broj;

	printf("Molim vas upi�ite jedan broj:\n");
	scanf_s("%d", &broj);
									/*Ako je broj pozitivan ispisati �e dupli broj od unesenog, a ako je negativan onda kvadrat, za nulu - nula*/
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