/*Napiši funkciju koja primi pokazivaèe na jedan char, jedan short i jedan long, te ih kvadrira.
U glavnom programu uèitajte tri broja navedenih tipova, te ih kvadrirajte koristeæi upravo napisanu funkciju*/

#include <stdio.h>
void funkcija_za_kvadriranje(char *prvi_broj, short *drugi_broj, long *treci_broj);
int main(void)
{
	char prvi_broj = 2;
	short drugi_broj = 4;
	long treci_broj = 6;
	/*
	printf("Unesite tri broja: ");
	scanf_s(" %c %d %d", &prvi_broj, &drugi_broj, &treci_broj);      /*scanf_s za char ne radi na mom visual studiu*/
	
	funkcija_za_kvadriranje(&prvi_broj, &drugi_broj, &treci_broj);
	printf("%c %d %d", prvi_broj, drugi_broj, treci_broj);

	getchar();
	getchar();

	return 0;
}

void funkcija_za_kvadriranje(char *prvi_broj, short *drugi_broj, long *treci_broj)
{
	*prvi_broj *= *prvi_broj;
	*drugi_broj *= *drugi_broj;
	*treci_broj *= *treci_broj;

	return 0;
}