/*U pojednostavljenom ZIP formatu, sadržaj arhive je spremljen u binarnu datoteku bez kompresije na sljedeći način:
 arhiva može sadržavati više datoteka pri čemu su podaci o njima unutar arhive spremljeni slijedno svaka datoteka unutar arhive 
 je spremljena pomoću tri zapisa ime datoteke (char[256]) duljina datoteke (long (8 bajta))
 sadržaj datoteke (niz bajta duljine određene prethodnim parametrom)*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ime_datoteke[256];
    long long duljina_datoteke;
    unsigned char *sadrzaj_datoteke;
    FILE *izvorna, *odredisna;
    
    // otvaranje
    izvorna=fopen("arhiva.mzip", "r");
    if(izvorna==NULL)
        return 9;
    
    //setnja kroz datoteku dok ne dodje do kraja
    while(fread(ime_datoteke, sizeof(char), 256, izvorna))
    {
        //otkrivanje duljine datoteke
        fread(&duljina_datoteke, sizeof(long long), 1, izvorna);
        
        //alociranje dovoljno velikog prostora
        sadrzaj_datoteke=malloc(duljina_datoteke*sizeof(long long));
        
        //citanje sadrzaja datoteke
        fread(sadrzaj_datoteke, sizeof(unsigned char), duljina_datoteke, izvorna);
        
        //ovaranje odredisne i zapisivanje u nju
        odredisna=fopen(ime_datoteke, "wb+");
        if(odredisna==NULL)
            return 8;
        fwrite(sadrzaj_datoteke, sizeof(unsigned char), duljina_datoteke, odredisna);
        
        //osčobadjanje alociranog djela memorije
        free(sadrzaj_datoteke);
        
        //zatvaranje odredisne datoteke
        fclose(odredisna);
    }
    fclose(izvorna);
    return 0;
}
