/*U�itajte od korisnika jedan prirodni broj, te ispi�ite unatrag (od ve�ih prema manjima) sve brojeve manje od njega.*/

#include <stdio.h>

int main(void)

{
	unsigned broj=1;
	printf("unesite jedan prirodni broj:\n");
	scanf_s("%u", &broj);

	for (; broj > 0; broj = broj - 1)
	{
		printf("%u\n ", broj);
	}

	getchar();
	getchar();

	return 0;
}