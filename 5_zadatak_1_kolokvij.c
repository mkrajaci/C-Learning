/*a) funkciju kvadratna_sredina koja primi tri parametra a, b i c, te kao povratnu
vrijednost vrati njihovu kvadratnu sredinu ( K=√a2+b2+c2 )
b) funkciju usredini koja primi tri parametra a, b i c, izracuna njihovu kvadratnu sredinu
koristeci funkciju iz a) dijela zadatka, te postavi sva tri parametra na dobiveni iznos (parametri
predstavljaju reference na vanjske varijable).*/
#include <stdio.h>
#include <math.h>
double kvadratna_sredina(int a, int b, int c);
void u_sredini(int *a, int *b, int *c);
int main(void)
{
	int a, b, c;
	printf("Molim unesite tri vrijednosti: ");
	scanf("%d %d %d", &a, &b, &c);
	u_sredini(a, b, c);
	printf("%d %d %d", a, b, c);
	getchar();
	getchar();
	return 0;
}
void u_sredini(int *a, int *b, int *c)
{
	kvadratna_sredina(a, b, c);
	a = b = c = kvadratna_sredina;
	return 0;
}
double kvadratna_sredina(int *a, int *b, int *c)
{
	double kvadratna_sredina;
	kvadratna_sredina = sqrt(pow(*a, 2) + pow(*b, 2) + pow(*c, 2));
	return kvadratna_sredina;
}
