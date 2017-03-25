/*Uèitati pozitivan cijeli broj i izraèunati slijed brojeva na slijedeæi naèin:
- Ako je broj paran podijeliti ga s 2
- Ako je neparan pomnožiti s 3 i dodati 1
Ponavljati postupak dok broj ne postane jednak 1. 
U svakom koraku ispisati trenutnu vrijednost broja. 
Ispisati ukupan broj operacija nad uèitanim brojem.*/

#include <stdio.h>

int main(void)
{
	unsigned upisani_broj, brojac = 1;

	printf("Upisi pozitivan broj: ");
	scanf_s("%u", &upisani_broj);

	if (upisani_broj > 1)
		{
		while (upisani_broj != 1)
		{
			if (upisani_broj % 2 == 0)
			{
				upisani_broj = upisani_broj / 2;
				printf("U %u. koraku broj = %u\n", brojac, upisani_broj);
			}
			else
			{
				upisani_broj = (upisani_broj * 3) + 1;
				printf("U %u. koraku broj = %u\n", brojac, upisani_broj);
			}

			++brojac;
		}
		printf("Ukupano %u koraka.", --brojac);
	}
	getchar();
	getchar();

	return 0;
}
