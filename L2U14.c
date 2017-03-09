/*Napisite program koji ispisuje svaki drugi parni broj u intervalu [1, 100].*/

#include <stdio.h>

int main(void)
{
	unsigned broj;

	for (broj = 4; broj <= 100; broj = broj + 4)
	{
		printf("Parni brojevi su: %u\n", broj);
	}
	getchar();
	getchar();
	return 0;
}