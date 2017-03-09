/*Napisite program koji ispisuje kvadrate prvih 100 prirodnih brojeva.*/

#include <stdio.h>

int main(void)
{
	unsigned broj, kvadrat;

	for (broj = 1; broj <= 100; broj = broj + 1)
	{
		kvadrat = broj*broj;
		printf("kvadrat broja: %u je %u\n", broj, kvadrat);
	}

	getchar();
	getchar();
	return 0;
}