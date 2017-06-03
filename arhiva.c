/*U pojednostavljenom ZIP formatu, sadržaj arhive je spremljen u binarnu datoteku bez kompresije na sljedeći način:
 arhiva može sadržavati više datoteka pri čemu su podaci o njima unutar arhive spremljeni slijedno svaka datoteka unutar arhive 
 je spremljena pomoću tri zapisa ime datoteke (char[256]) duljina datoteke (long (8 bajta))
 sadržaj datoteke (niz bajta duljine određene prethodnim parametrom)*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ime_prve_datoteke[256], ime_druge_datoteke[256];
    long long duljina_prve_datoteke, duljina_druge_datoteke;
    unsigned char *sadrzaj_prve_datoteke, *sadrzaj_druge_datoteke;
    FILE *izvorna_datoteka, *odredisna_datoteka, *druga_odredisna_datoteka;
    
    izvorna_datoteka=fopen("arhiva.mzip", "r"); //otvaranje izvora
    if(izvorna_datoteka==NULL)
        return 9;
    
    fread(ime_prve_datoteke, sizeof(char), 256, izvorna_datoteka);  //citanje imena prve datoteke
    fread(&duljina_prve_datoteke, sizeof(long long), 1, izvorna_datoteka);  //citanje duljine datoteke
    sadrzaj_prve_datoteke=malloc(duljina_prve_datoteke*sizeof(long long));  //alociranje dovoljno velikog prostora
    fread(sadrzaj_prve_datoteke, sizeof(unsigned char), duljina_prve_datoteke, izvorna_datoteka);   //citanje sadrzaja datoteke
    odredisna_datoteka=fopen(ime_prve_datoteke, "wb+"); //kreiranje prve odredisne datoteke
    if(odredisna_datoteka==NULL)
        return 8;
    fwrite(sadrzaj_prve_datoteke, sizeof(unsigned char), duljina_prve_datoteke, odredisna_datoteka);    //Upis sadrzaja
    free(sadrzaj_prve_datoteke);
//Isti postupak za drugu datoteku
    fread(ime_druge_datoteke, sizeof(char), 256, izvorna_datoteka);
    fread(&duljina_druge_datoteke, sizeof(long long), 1, izvorna_datoteka);
    sadrzaj_druge_datoteke=malloc(duljina_druge_datoteke*sizeof(long long));
    fread(sadrzaj_druge_datoteke, sizeof(unsigned char), duljina_druge_datoteke, izvorna_datoteka);
    druga_odredisna_datoteka=fopen(ime_druge_datoteke, "wb+");
    if(druga_odredisna_datoteka==NULL)
        return 7;
    fwrite(sadrzaj_druge_datoteke, sizeof(unsigned char), duljina_druge_datoteke, druga_odredisna_datoteka);
    free(sadrzaj_druge_datoteke);
    
    fclose(izvorna_datoteka);
    fclose(odredisna_datoteka);
    fclose(druga_odredisna_datoteka);
    return 0;
}
