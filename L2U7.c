/*Sto ispisuje sljedeci program:*/

#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = 1, b = 10; a < b; a = a + 1, b = b - 1)
		printf("%d %d\n", a, b);

	getchar();
	getchar();
	return 0;
}