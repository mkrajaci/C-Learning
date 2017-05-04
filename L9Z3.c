/*Otmicar zeli sastaviti pismo u kojem trazi otkupninu koristeci slova iz izrezanog novinskog clanka.
Napisite funkciju koja ce primiti tekst pisma i tekst clanka te vratiti 1 ukoliko je pismo moguce sastaviti koristeci slova iz danog clanka, inace 0.
Pri sastavljanju pisma dopusteno je koristiti i VELIKA i mala slova iz clanka pa je tako npr.
tekst:
"Zelis li svog zeca natrag donesi Milku u pet iza benzinske"
dopusteno sastaviti i kao:
"zELis li svoG ZEca naTRaG donesi milku u Pet IzA bEnziNSke"
Pretpostavite da se u tekstu pisma koriste iskljucivo slova engleske abecede.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char funkcija(char *pismo, char *clanak);
int main(void)
{
	char pismo[] = "Zelis li svog zeca natrag donesi Milku u pet iza benzinske";
	char clanak[] = "Zelis li svog zeca natrag donesi Milku u pet iza benzinske";			//slova potrebna za pismo
//	char clanak[] = "zel";								//slova nedostatna za pismo
	printf("%d", funkcija(pismo, clanak));
	getchar();
	getchar();
	return 0;
}
char funkcija(char *pismo, char *clanak)
{
	int brojac;
	int ima_slovo;
	for (; *pismo != '\0'; ++pismo)
	{
		if (!isspace(*pismo))
		{
			ima_slovo = 0;
			for (brojac = 0; clanak[brojac] != '\0'; ++brojac)
			{
				if (*pismo == clanak[brojac])
				{
					clanak[brojac] = '!';
					++ima_slovo;
					break;
				}
			}
			if (!ima_slovo)
				return 0;
		}
	}
	return 1;
}