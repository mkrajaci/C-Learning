/* 2013-07-12-ispit-1, 1. zadatak
Automat za kavu i slatkiše (crveni, u hodniku, ispred uèionice) prima sve novèanice, 
i papirnate i kovanice do (ukljuèujuæi i) novèanice od 50 kn. 
Razliku u cijeni izmeðu uplaæenog iznosa i cijene biranog artikla (hrv. "kusur") 
automat vraæa iskljuèivo u kovanicama (od 1 lp do 5 kn). Napisati funkciju koja æe 
primiti cijenu biranog artikla i uplaæeni iznos, te æe ispisati koje kovanice korisniku 
treba vratiti tako da broj vraæenih kovanica bude minimalan. Pretpostavite idealan sluèaj 
u kojem automat ima na raspolaganju neogranièenu kolièinu svih kovanica.

Npr.

Cijena artikla	Uplaæeni iznos	Povrat
4 kn			5 kn			1 kn
6,50 kn			20 kn			5 kn, 5 kn, 2 kn, 1 kn, 50 lp */

#include <stdio.h>
int main(void)
{
	int cijena_artikla, uplaceni_iznos, povrat, razlika;
	int kovanica_5kn, kovanica_2kn, kovanica_1kn, kovanica_50l, kovanica_20l, kovanica_10l, kovanica_5l;
	

	printf("Unesite cijenu artikla: ");
	scanf_s("%d", &cijena_artikla);
	printf("\nUnesite uplaceni iznos: ");
	scanf_s("%d", &uplaceni_iznos);


	if (uplaceni_iznos > 0 && uplaceni_iznos <= 50)
	{
		if (cijena_artikla < uplaceni_iznos)
		{
			razlika = uplaceni_iznos - cijena_artikla;

			if (razlika >= 5)
			{
				kovanica_5kn = razlika / 5;
				printf("Od 5 kn cete dobiti: %d komada", kovanica_5kn);
				povrat = razlika % 5;
			}

			if (povrat >= 2 && povrat < 5)
			{
				kovanica_2kn = povrat / 2;
				printf("\nOd 2 kn cete dobiti: %d komada", kovanica_2kn);
				povrat = povrat % 2;
			}

			if (povrat >= 1 && povrat < 2)
			{
				kovanica_1kn = povrat / 1;
				printf("\nOd 1 kn cete dobiti: %d komada", kovanica_1kn);
				povrat = povrat % 1;
			}
		}
		else printf("Niste unijeli dovoljno novaca.");
	}
	else printf("Unesite uplaceni iznos veci od 0 kn, a manji od 50 kn");
	
	getchar();
	getchar();
	
	return 0;
}
