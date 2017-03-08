/*Sto ispisuje sljedeci program (ASCII kod znaka 'a' je 97)*/

#include <stdio.h>

int main(void)
{
	char znak;
	for (znak = 'a'; znak <= 'c'; znak = znak + 1)
	{
		printf("%c %d\n", znak, znak);
	}
	getchar();
	getchar();
	return 0;
}