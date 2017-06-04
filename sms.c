/*SMPP odnosno protokol za slanje SMS poruka u mobilnim mrežama podržava isključivo SMS poruke duljine do 160 znakova. Da bi podržali
 slanje dužih poruka, mobilni uređaji rastavljaju "dugačke" SMS poruke na niz "kratkih" poruka, šalju ih pojedinačno, te se one nakon
 isporuke ponovno spajaju na strani primatelja.
 
 Algoritam rastavljanja SMS poruka je sljedeći: poruke duljine <= 160 znakova se šalju kao jedna poruka, poruke duže od 160 znakova
 šalju se kao veći broj poruka duljine <=153 znaka (preostalih 7 "znakova" se koristi za signalizaciju mobitelu primaocu kako te poruke
 ponovno spojiti u jednu)
 
 Napišite program koji za bilo koji učitani tekst ispisuje kako bi on bio rastavljen kada bi se slao unutar SMS poruke. Maksimalna
 podržana duljina SMS poruka je 6*153=918 znakova.*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char poruka[1000]="Ovo je stvarno dugacka poruka koja ne stane u jedan sms jer je jako dugacka i duza od najduzeg smsa dok jos moram dopisati puno teksta kako bi ovo imalo smisla bas i nema smisla sada kada je jako dugacka";
//    printf("Upisite zeljenju poruku:\n");
//    gets(poruka);
    int duljina=strlen(poruka);
    if(duljina<=160)
        puts(poruka);
    else if((duljina>160)&&(duljina<=918))
    {
        for(int brojac=0; brojac<duljina;++brojac)
        {
            printf("%c", poruka[brojac]);
            if(brojac==152)
                printf("\ndruga poruka\n");
            if(brojac==305)
                printf("\ntreca poruka\n");
            if(brojac==458)
                printf("\ntreca poruka\n");
            if(brojac==611)
                printf("\ncetvrta poruka\n");
            if(brojac==764)
                printf("\npeta poruka\n");
            if(brojac==917)
                printf("\nsesta poruka\n");
        }
    }
    return 0;
}
