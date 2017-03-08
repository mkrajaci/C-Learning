/*Sto ispisuje program?*/

#include <stdio.h>

int main(void)
{
	unsigned broj = 7;
	while (broj) {
		printf("%d\n", broj);
		broj = broj / 2;
	}
	printf("%d\n", broj);


	getchar();
	getchar();

	return 0;
}