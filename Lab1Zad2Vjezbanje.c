/*Napisati program za simulaciju bankomata.
Na raspolaganju imamo nov�anice/kovanice u iznosima: 50kn, 20kn, 5kn, 2kn, 1kn 
(za potrebe zadatka pretpostaviti da imamo neograni�eni iznos nov�anica/kovanica u svim navedenim apoenima).
Napisati program koji od korisnika u�ita neki cijeli broj koji predstavlja odre�eni iznos te ispisati 
koliko nam je nov�anica/kovanica u razli�itim apoenima potrebno za isplatiti taj iznos.*/

#include <stdio.h>

void funkcija(unsigned iznos_za_isplatu)
{
	unsigned apoen_50kn, apoen_20kn, apoen_5kn, apoen_2kn, apoen_1kn;
	if (iznos_za_isplatu >= 50)
	{
		apoen_50kn = iznos_za_isplatu / 50;
		iznos_za_isplatu = iznos_za_isplatu % 50;
		printf("Broj novcanica od 50 kn: %u\n", apoen_50kn);
		apoen_20kn = iznos_za_isplatu / 20;
		iznos_za_isplatu = iznos_za_isplatu % 20;
		printf("Broj novcanica od 20 kn: %u\n", apoen_20kn);
		apoen_5kn = iznos_za_isplatu / 5;
		iznos_za_isplatu = iznos_za_isplatu % 5;
		printf("Broj kovanica od 5 kn: %u\n", apoen_5kn);
		apoen_2kn = iznos_za_isplatu / 2;
		iznos_za_isplatu = iznos_za_isplatu % 2;
		printf("Broj kovanica od 2 kn: %u\n", apoen_2kn);
		apoen_1kn = iznos_za_isplatu / 1;
		iznos_za_isplatu = iznos_za_isplatu % 1;
		printf("Broj kovanica od 1 kn: %u\n", apoen_1kn);
	}
	else if (iznos_za_isplatu < 50 && iznos_za_isplatu > 20)
	{
		apoen_20kn = iznos_za_isplatu / 20;
		iznos_za_isplatu = iznos_za_isplatu % 20;
		printf("Broj novcanica od 20 kn: %u\n", apoen_20kn);
		apoen_5kn = iznos_za_isplatu / 5;
		iznos_za_isplatu = iznos_za_isplatu % 5;
		printf("Broj kovanica od 5 kn: %u\n", apoen_5kn);
		apoen_2kn = iznos_za_isplatu / 2;
		iznos_za_isplatu = iznos_za_isplatu % 2;
		printf("Broj kovanica od 2 kn: %u\n", apoen_2kn);
		apoen_1kn = iznos_za_isplatu / 1;
		iznos_za_isplatu = iznos_za_isplatu % 1;
		printf("Broj kovanica od 1 kn: %u\n", apoen_1kn);
	}
	else if (iznos_za_isplatu < 20 && iznos_za_isplatu > 5)
	{
		apoen_5kn = iznos_za_isplatu / 5;
		iznos_za_isplatu = iznos_za_isplatu % 5;
		printf("Broj kovanica od 5 kn: %u\n", apoen_5kn);
		apoen_2kn = iznos_za_isplatu / 2;
		iznos_za_isplatu = iznos_za_isplatu % 2;
		printf("Broj kovanica od 2 kn: %u\n", apoen_2kn);
		apoen_1kn = iznos_za_isplatu / 1;
		iznos_za_isplatu = iznos_za_isplatu % 1;
		printf("Broj kovanica od 1 kn: %u\n", apoen_1kn);
	}
	else if (iznos_za_isplatu < 5 && iznos_za_isplatu > 2)
	{
		apoen_2kn = iznos_za_isplatu / 2;
		iznos_za_isplatu = iznos_za_isplatu % 2;
		printf("Broj kovanica od 2 kn: %u\n", apoen_2kn);
		apoen_1kn = iznos_za_isplatu / 1;
		iznos_za_isplatu = iznos_za_isplatu % 1;
		printf("Broj kovanica od 1 kn: %u\n", apoen_1kn);
	}
	else if (iznos_za_isplatu < 2 && iznos_za_isplatu > 1)
	{
		apoen_1kn = iznos_za_isplatu / 1;
		iznos_za_isplatu = iznos_za_isplatu % 1;
		printf("Broj kovanica od 1 kn: %u\n", apoen_1kn);
	}
	else printf("Unijeli ste 0.");
}

int main(void)
{
	unsigned iznos_za_isplatu;
	printf("Unesite iznos\n");
	scanf_s("%u", &iznos_za_isplatu);

	funkcija(iznos_za_isplatu);

	getchar();
	getchar();

	return 0;
}