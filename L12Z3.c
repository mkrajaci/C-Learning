/*U tekstualnoj datoteci index.txt zapisani su cijeli brojevi odvojeni razmacima. U binarnoj datoteci podaci.dat zapisane su slijedno vrijednosti tipa double.
 Ispisati na zaslon sadržaj datoteke podaci.dat onim redom kojim su njihovi redni brojevi zapisani u datoteci index.txt.
 Npr. za sadržaj datoteke index.txt: 3 5 1 4 2
 Ispisati na zaslon prvo 3. vrijednost iz datoteke podaci.dat, potom 5., 1., 4., te naposljetku 2. zapisanu vrijednost.*/
#include<stdio.h>
int main(void)
{
    FILE *index, *podaci;
    float podaci_u_datoteci[]={1.0, 2.0, 3.0, 4.0, 5.0};    //priprema niza za bin datoteku
    index = fopen("index.txt", "r");
    if (index == NULL)
        return 1;
    podaci = fopen("podaci.dat", "wb+");
    if (podaci == NULL)
        return 2;
    fwrite(&podaci_u_datoteci, sizeof(float), 5, podaci);
    int indexi=0;
    while(fscanf(index, "%d", &indexi)!=EOF)        //prolazak kroz txt datoteku i uzimanje indexa
    {
        float brojevi;
        fseek(podaci, sizeof(float)*(indexi-1), SEEK_SET);  //postavljanje na poziciju unutar bin datoteke s koje citam vrijednost
        fread(&brojevi, sizeof(float), 1, podaci);  //citanje vrijednosti na indexu iz txt
        printf("%.2lf\n", brojevi);         //ispis
    }
    return 0;
}
