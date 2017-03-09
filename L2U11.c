/*Sto ispisuje program?*/

#include <stdio.h>

int main(void)
{
	int broj;
	for (broj = 10; broj; broj = broj / 2)
		printf("%d", broj);


	getchar();
	getchar();
	return 0;
}