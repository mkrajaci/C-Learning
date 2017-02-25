/*Ispitivanje realnog broja, pozitivan, negativan ili 0*/

#include <stdio.h>

int main(void)
{
	int a;												/*deklaracija varijable*/

	printf("Molim unesite jedan realan broj:\n");
	scanf_s("%d", &a);									/*upis vrijednosti sa tipkovnice u varijablu*/

	if (a > 0)											/*Provjera vrijednosti i ispis rezultata ispitivanja*/
		printf("Uneseni broj je pozitivan.\n");
	if (a < 0)
		printf("Uneseni broj je negativan.\n");
	if (a == 0)
		printf("Uneseni broj je jednak nuli.\n");

	getchar();
	getchar();

	return 0;
}