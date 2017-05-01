/*Napisati program koji �e izbrojati koliko re�enica ima rije�i i ispisati najkra�u rije� i njen broj znakova, 
najdu�u rije� i koliko ima znakova te prosje�nu duljinu rije�i. Rije�i su odvojene znakom _.
Primjer ispisa za re�enicu: Ovo_je_neki_string
Broj rije�i: 4
Najkra�a rije� je �je� i ima 2 slova
Najdu�a rije� je �string� i ima 6 slova
Prosje�na duljina rije�i je: 3.75 slova*/
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