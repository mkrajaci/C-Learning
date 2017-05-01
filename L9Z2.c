/*Napisati program koji æe izbrojati koliko reèenica ima rijeèi i ispisati najkraæu rijeè i njen broj znakova, 
najdužu rijeè i koliko ima znakova te prosjeènu duljinu rijeèi. Rijeèi su odvojene znakom _.
Primjer ispisa za reèenicu: Ovo_je_neki_string
Broj rijeèi: 4
Najkraæa rijeè je „je“ i ima 2 slova
Najduža rijeè je „string“ i ima 6 slova
Prosjeèna duljina rijeèi je: 3.75 slova*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char recenica[]="Ovo_je_neki_string";
	int brojac; 
	float brojac_rijeci = 0;
	char *novi_niz;
	novi_niz = strtok(recenica, "_");
	char *kraca = novi_niz;
	char *duza = novi_niz;
	for (brojac = 0; novi_niz != NULL; ++brojac)
	{
		if (strlen(novi_niz) < strlen(kraca))		//trazenje manje rijeci
			kraca = novi_niz;
		else if (strlen(novi_niz) > strlen(duza))	//trazenje vece rijeci
			duza = novi_niz;
		brojac_rijeci += strlen(novi_niz);			//brojenje slova za kasnije racunjanje prosjecne duzine rijeci
		novi_niz = strtok(NULL, "_");
	}
	printf("Broj rijeci: %d\n", brojac);
	printf("Najkraca rijec je '%s' i ima %d slova\n", kraca, strlen(kraca));
	printf("Najduza rijec je '%s' i ima %d slova\n", duza, strlen(duza));
	printf("Prosjecna duljina rijeci je: %.2f", brojac_rijeci / brojac);
	getchar();
	getchar();
	return 0;
}