/*Provjera u kojem je intervalu upisani broj*/

#include <stdio.h>

int main(void)
{
	int a;
	printf("Unesite jedan cijeli broj\n");
	scanf_s("%d", &a);

	if (a > 100 && a < 999)			/*provjera u kojem je intervalu upisani broj, ako je izmeðu 100 i 999 ispisuje se Da*/
		printf("Da\n");
	else
		printf("Ne\n");
	
	getchar;
	getchar;

	return 0;
}