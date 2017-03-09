/*Napisite program koji ispisuje sve parne brojeve u intervalu [1, 100].*/

#include <stdio.h>

int main(void)
{
	unsigned broj;

	for (broj = 2; broj <= 100; broj = broj + 2)
	{
		printf("Parni brojevi su: %u\n", broj);
	}
	getchar();
	getchar();
	return 0;
}