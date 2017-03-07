/*Napišite program koji ispisuje svaki drugi broj u intervalu [1, 500]. (1 3 5 7 9 ...)*/

#include <stdio.h>

int main(void)
{
	unsigned broj;

	for (broj = 1; broj <= 500; broj = broj + 2) 
	{
		printf("%u\n", broj);
	}

	getchar();
	getchar();

	return 0;
}