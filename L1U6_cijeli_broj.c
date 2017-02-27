/*Provjera je li upisan cijeli broj*/

#include <stdio.h>

int main(void)
{
	int broj;
	printf("Unesite jedan broj\n");
	scanf_s("%d", &broj);

	if(broj>=0)
		printf("Da\n");
	else
		printf("Ne\n");

	getchar();
	getchar();
	return 0;
}
