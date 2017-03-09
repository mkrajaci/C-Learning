/*Napisite program koji ispisuje sve neparne brojeve u intervalu [1, 100].*/

#include <stdio.h>

int main(void)
{
	unsigned broj;

	for (broj = 1; broj < 100; broj = broj + 2)
	{
		printf("Neparni brojevi su: %u\n", broj);
	}
	getchar();
	getchar();
	return 0;
}