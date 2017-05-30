/*U binarnoj datoteci „podaci.dat“ su spremljeni podaci o prodaji za pojedine dane na način da je najprije naveden broj puta koliko se
 taj proizvod tog dana prodao, a nakon toga su navedene prodane količine. Npr. ako su zapisani podaci 3 1 2 3 2 6 3 1 2 0 (bez razmaka)
 to znači da se prvog dana proizvod prodao 3 puta i to u količinama 1, 2, 3 - > ukupno 6 komada, drugog dana se prodao 2 puta i to u
 količinama 6, 3 -> ukupno 9. Potrebno je sadržaj binarne datoteke prepisati u tekstualnu datoteku „podaci.txt“ na način da se u nju
 pospreme samo ukupne količine, odnosno za navedeni sadržaj binarne datoteke, sadržaj tekstualne bi trebao izgledati: 6 9 2 0*/
/* D O V R S I T I */

#include <stdio.h>
int main(void)
{
    FILE *podaci, *kolicine;
    int suma=0;
    int buffer;
    int niz_brojeva[]={3,1,2,3,2,6,3,1,2,0};
    podaci=fopen("podaciL13.dat", "wb+");
    if(podaci==NULL)
        return 9;
    kolicine=fopen("podaciL13.txt", "w+");
    if(kolicine==NULL)
        return 8;
    fwrite(niz_brojeva, sizeof(int), 4, podaci);
    fseek(podaci, 0, SEEK_SET);
    while(fread(&buffer, sizeof(int), 1, podaci)!=0)
    {
        for(int brojac=buffer; brojac>0; --brojac)
        {
            fread(&buffer, sizeof(int), 1, podaci);
            suma+=buffer;
        }
        fprintf(kolicine, "%d", suma);
        suma=0;
    }
    fseek(kolicine, 0, SEEK_SET);
    fclose(podaci);
    fclose(kolicine);
    return 0;
}
