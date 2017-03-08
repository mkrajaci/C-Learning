/*Sto ispisuje sljedeci program?*/

#include <stdio.h>

int main(void)
{
	short a = 10;
	do {
		a = a - 1;
		printf("%d\n", a);
	} while (a >= 1);


	getchar();
	getchar();
	return 0;
}