/*Napišite funkciju koja primi jedno slovo engleske abecede, te vrati slovo koje u abecedi dolazi nakon njega. 
Napomena: za proslijeðeno slovo z odnosno Z, povratna vrijednost treba biti a odnosno A.*/

char koje_slovo(char korisnikovo_slovo)
{
	if (korisnikovo_slovo = 'z')
		return 'a';
	else if (korisnikovo_slovo = 'Z')
		return 'A';
	else 
	{
		korisnikovo_slovo = korisnikovo_slovo + 1;
		return korisnikovo_slovo;
	}
}

int main(void)
{
	char uneseno_slovo;

	printf("Unesite jedno slovo:\n");
	scanf_s("%c", &uneseno_slovo);

	printf("%c", koje_slovo(uneseno_slovo));
	
	getchar();
	getchar();

	return 0;

} 