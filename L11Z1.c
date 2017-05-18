/*Napisati funkciju s prototipom:
 float dobitak(char *imedat, int *ishodi, float ulog);
 imedat je ime tekstualne datoteke koja predstavlja listić iz kladionice. Svaki zapis u
 datoteci se sastoji od imena prve momčadi (20+1), imena druge momčadi (20+1), izbora
 (int) i koeficijenta (float). Izbor može biti 1 (pobjeđuje 1. momčad), 2 (pobjeđuje 2.
 momčad) i 3 (izjednačeno). Niz ishod sadrži rezultate (elementi mogu biti vrijednosti 1, 2,
 3). Pretpostaviti da redni broj rezultata u polju ishodi odgovara rednom broju u datoteci
 (rezultat na prvom mjestu predstavlja rezultat prve utakmice čiji se zapis nalazi na prvom
 mjestu u datoteci itd.). Ulog je ukupni iznos uložen na listić. Funkcija treba izračunati
 koliko je ukupan dobitak ostvaren na temelju listića. Da bi dobitak uopće bio ostvaren
 svih ishodi moraju biti pogođeni. U tom slučaju dobitak predstavlja umnožak svih
 koeficijenata u datoteci i uloga. Ukoliko neki ishod nije pogođen rezultat je 0.
 Npr. za listić:
 Rijeka Hajduk 1 1.70
 Atalanta Milan 2 3.40
 Monaco Lille 3 1.11
 i ishode {1 , 2, 3 } dobitak iznosi 64.16 kn.*/
#include <stdio.h>
float dobitak(char *imedat, int *ishodi, float ulog);
int main(void)
{
    int ishod1[]={1, 2, 3};
    int ishod2[]={1, 3, 4};
    float ukupni_dobitak;
    ukupni_dobitak=dobitak("imedat.txt", ishod1, 10);
    printf("Dobitak iznosi: %.2lf\n", ukupni_dobitak);
/*
    char buffer[1000];
    FILE *f;
    f=fopen("imedat.txt", "r");
    if(f==NULL)
        printf("nemogu otvoriti datoteku");
    while(fgets(buffer, 1000, f))
        puts(buffer);
*/
    return 0;
}
float dobitak(char *imedat, int *ishodi, float ulog)
{
    float ukupni_koef=1, dobitak;
    int brojac=0;
    char klub1[30], klub2[30];
    int oklada;
    float koeficijent;
    FILE *f;
    f=fopen(imedat, "r");
    if(f==NULL)
        return 1;
    
    while(fscanf(f, "%s %s %d %f", klub1, klub2, &oklada, &koeficijent)!=EOF)
    {
        if(oklada!=ishodi[brojac])
            return 0;
        else ukupni_koef*=koeficijent;
        ++brojac;
    }
    dobitak=ulog*ukupni_koef;
    fclose(f);
    return dobitak;
}
