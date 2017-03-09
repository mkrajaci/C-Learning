/*Napisite program koji ispisuje svaki drugi neparni broj u intervalu [1, 100].*/

#include <stdio.h>

int main(void)
{
	unsigned broj;

	for (broj = 3; broj < 100; broj = broj + 4)
	{
		printf("Neparni brojevi su: %u\n", broj);
	}
	getchar();
	getchar();
	return 0;
}