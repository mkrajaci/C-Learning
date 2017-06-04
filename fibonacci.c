/*Napišite funkciju prototipa
	int next_fibonacci();
 koja će prilikom svakog poziva vratiti idući Fibonaccijev broj.
 Također napišite funkciju prototipa
	void restart_fibonacci();
 koja će resetirati generiranje Fibonaccievog niza prethodnom funkcijom ponovno od početka.*/
#include <stdio.h>

//deklaracija statickih svugdje vidljivih varijabli
static int prvi_broj=0;
static int drugi_broj=1;
static int fibo_broj=0;

int next_fibonacci();
void restart_fibonacci();

int main(void)
{
    int koliko_nizova;
    printf("Koliko nizova brojeva zelite?\n");
    scanf("%d", &koliko_nizova);
    for(int brojac=0; brojac<=koliko_nizova;++brojac)
        printf("%d\n",next_fibonacci());
    printf("Zelite li resetirati fibo niz unesite 0.\n");
    int reset=1;
    scanf("%d", &reset);
    if(reset==0)
        restart_fibonacci();
    return 0;
}

int next_fibonacci()
{
    //fibo broj je zbroj dva prethodna
    fibo_broj=prvi_broj+drugi_broj;
    prvi_broj=drugi_broj;
    drugi_broj=fibo_broj;
    return fibo_broj;
}

void restart_fibonacci()
{
    prvi_broj=0;
    drugi_broj=1;
    fibo_broj=0;
}
