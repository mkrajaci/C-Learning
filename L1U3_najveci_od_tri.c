/*Upitajte korisnika tri broja i ispišite najveæi*/

#include <stdio.h>

int main(void)
{
	int a, b, c, najveci;

	printf("Molim unesite tri broja:\n");

	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)							/*Provjera koji je od tri unesena broja najveci*/
		najveci = a;
	else najveci = b;

	if (najveci < c)
		najveci = c;
	
	printf("Najveci broj je: %d\n", najveci);

	getchar();
	getchar();

	return 0;
}