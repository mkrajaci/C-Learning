/*U binarnoj datoteci „podaci.dat“ su spremljeni podaci o prodaji za pojedine dane na način da je najprije naveden broj puta koliko se
 taj proizvod tog dana prodao, a nakon toga su navedene prodane količine. Npr. ako su zapisani podaci 3 1 2 3 2 6 3 1 2 0 (bez razmaka)
 to znači da se prvog dana proizvod prodao 3 puta i to u količinama 1, 2, 3 - > ukupno 6 komada, drugog dana se prodao 2 puta i to u
 količinama 6, 3 -> ukupno 9. Potrebno je sadržaj binarne datoteke prepisati u tekstualnu datoteku „podaci.txt“ na način da se u nju
 pospreme samo ukupne količine, odnosno za navedeni sadržaj binarne datoteke, sadržaj tekstualne bi trebao izgledati: 6 9 2 0*/

#include <stdio.h>
int main(void)
{
    FILE *podaci, *kolicine;
    int suma=0;
    int buffer;
    int niz_brojeva[]={3,1,2,3,2,6,3,1,2,0};    //priprema niza brojeva za binarnu datoteku
    podaci=fopen("podaciL13.dat", "wb+");       //kreiranje binarne datoteke
    if(podaci==NULL)
        return 9;
    kolicine=fopen("podaciL13.txt", "w+");      //kreiranje txt datoteke
    if(kolicine==NULL)
        return 8;
    fwrite(niz_brojeva, sizeof(int), 10, podaci);   //upis u binarnu datoteku
    fseek(podaci, 0, SEEK_SET);                 //wracanje kursora u bin datoteci na pocetak (zeljeno mjesto)
    while(fread(&buffer, sizeof(int), 1, podaci)!=0)    //citanje iz bin datoteke jedan po jedan broj
    {
        for(int brojac=buffer; brojac>0; --brojac)  //koristenje jednog brojaca za setanje po datotekama
        {
            fread(&buffer, sizeof(int), 1, podaci);
            suma+=buffer;
        }
        fprintf(kolicine, "%d", suma);      //upis u txt datoteku
        suma=0;
    }
    fclose(podaci);
    fclose(kolicine);
    return 0;
}
