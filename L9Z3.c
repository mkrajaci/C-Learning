/*Otmièar želi sastaviti pismo u kojem traži otkupninu koristeæi slova iz izrezanog novinskog èlanka. 
Napišite funkciju koja æe primiti tekst pisma i tekst èlanka te vratiti 1 ukoliko je pismo moguæe sastaviti koristeæi slova iz danog èlanka, inaèe 0.
Pri sastavljanju pisma dopušteno je koristiti i VELIKA i mala slova iz èlanka pa je tako npr.
tekst:
"Zelis li svog zeca natrag donesi Milku u pet iza benzinske"
dopušteno sastaviti i kao:
"zELis li svoG ZEca naTRaG donesi milku u Pet IzA bEnziNSke"
Pretpostavite da se u tekstu pisma koriste iskljuèivo slova engleske abecede.*/
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
