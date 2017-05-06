/*Napisati program koji ce izbrojati koliko recenica ima rijeci i ispisati najkracu rijec i njen broj znakova,
najduzu rijec i koliko ima znakova te prosjecnu duljinu rijeci. Rijeci su odvojene znakom _.
Primjer ispisa za recenicu: Ovo_je_neki_string
Broj rijeci: 4
Najkraca rijec je "je" i ima 2 slova
Najduza rijec je "string" i ima 6 slova
Prosjecna duljina rijeci je: 3.75 slova*/
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
