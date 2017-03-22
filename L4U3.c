/*Ispiši 10 sluèajnih brojeva djeljivih sa 7.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int brojevi, brojac;
	srand(time(NULL));
	

	for (brojac = 0; brojac < 10;)
	{
		brojevi = rand();
		if (brojevi % 7 == 0)
		{
			printf("%d\n", brojevi);

		}
		else continue;
		++brojac;

	}
	getchar();
	getchar();

	return 0;
}