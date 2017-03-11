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
	int uplaceni_iznos, povrat, razlika;
	int kovanica_5kn, kovanica_2kn, kovanica_1kn, kovanica_50l, kovanica_20l, kovanica_10l, kovanica_5l;
	float cijena_artikla;

	printf("Unesite cijenu artikla: ");
	scanf_s("%f", &cijena_artikla);
	printf("\nUnesite uplaceni iznos: ");
	scanf_s("%d", &uplaceni_iznos);

	cijena_artikla = cijena_artikla * 100;
	uplaceni_iznos = uplaceni_iznos * 100;

	if (uplaceni_iznos > 0 && uplaceni_iznos <= 5000)
	{
		if (cijena_artikla < uplaceni_iznos)
		{
			razlika = uplaceni_iznos - cijena_artikla;

			if (razlika >= 500)
			{
				kovanica_5kn = razlika / 500;
				printf("Od 5 kn cete dobiti: %d komada", kovanica_5kn);
				povrat = razlika % 500;
			}

			if (povrat >= 200 && povrat < 500)
			{
				kovanica_2kn = povrat / 200;
				printf("\nOd 2 kn cete dobiti: %d komada", kovanica_2kn);
				povrat = povrat % 200;
			}

			if (povrat >= 100 && povrat < 200)
			{
				kovanica_1kn = povrat / 100;
				printf("\nOd 1 kn cete dobiti: %d komada", kovanica_1kn);
				povrat = povrat % 100;
			}

			if (povrat >= 50 && povrat < 100)
			{
				kovanica_50l = povrat / 50;
				printf("\nOd 50 lipa cete dobiti: %d komada", kovanica_50l);
				povrat = povrat % 50;
			}

			if (povrat >= 20 && povrat < 50)
			{
				kovanica_20l = povrat / 20;
				printf("\nOd 20 lipa cete dobiti: %d komada", kovanica_20l);
				povrat = povrat % 20;
			}

			if (povrat >= 10 && povrat < 20)
			{
				kovanica_10l = povrat / 10;
				printf("\nOd 10 lipa cete dobiti: %d komada", kovanica_10l);
				povrat = povrat % 10;
			}

			if (povrat >= 5 && povrat < 10)
			{
				kovanica_5l = povrat / 5;
				printf("\nOd 5 lipa cete dobiti: %d komada", kovanica_5l);
				povrat = povrat % 5;
			}
		}
		else printf("Niste unijeli dovoljno novaca.");
	}
	else printf("Unesite uplaceni iznos veci od 0 kn, a manji od 50 kn");
	
	getchar();
	getchar();
	
	return 0;
}
