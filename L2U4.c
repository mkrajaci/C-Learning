/*Napisite program koji ispisuje sva velika slova engleske abecede.*/

#include <stdio.h>

int main(void)
{
	char veliko_slovo;

	for (veliko_slovo = 'A'; veliko_slovo <= 'Z'; veliko_slovo = veliko_slovo + 1)
	{
		printf("%c\n", veliko_slovo);

	}
	
	getchar();
	getchar();
	return 0;
}