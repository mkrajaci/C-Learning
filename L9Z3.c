/*Otmi�ar �eli sastaviti pismo u kojem tra�i otkupninu koriste�i slova iz izrezanog novinskog �lanka. 
Napi�ite funkciju koja �e primiti tekst pisma i tekst �lanka te vratiti 1 ukoliko je pismo mogu�e sastaviti koriste�i slova iz danog �lanka, ina�e 0.
Pri sastavljanju pisma dopu�teno je koristiti i VELIKA i mala slova iz �lanka pa je tako npr.
tekst:
"Zelis li svog zeca natrag donesi Milku u pet iza benzinske"
dopu�teno sastaviti i kao:
"zELis li svoG ZEca naTRaG donesi milku u Pet IzA bEnziNSke"
Pretpostavite da se u tekstu pisma koriste isklju�ivo slova engleske abecede.*/
#include <stdio.h>
#include <string.h>
char funkcija(char *pismo, char *clanak);
int main(void)
{
	char pismo[] = "Zelis li svog zeca natrag donesi Milku u pet iza benzinske";
	char clanak[] = "zelisvogzcantrgdmkupbk";			//slova potrebna za pismo
//	char clanak[] = "zel";								//slova nedostatna za pismo
	printf("%d", funkcija(pismo, clanak));
	getchar();
	getchar();
	return 0;
}
char funkcija(char *pismo, char *clanak)
{
	char *novi_niz;
	int brojac;
	novi_niz = strtok(pismo, " ");
	for (brojac = 0; novi_niz != NULL; ++brojac)
	{
		

	}
	
}
