/*Sto ispisuje*/

#include <stdio.h>

int main(void)
{
	int broj = 1;
	for (; broj < 5;) {
		printf("%d", broj);
		broj = broj + 1;
	}



	getchar();
	getchar();
	return 0;
}