/*U tekstualnoj datoteci index.txt zapisani su cijeli brojevi odvojeni razmacima. U binarnoj datoteci podaci.dat zapisane su slijedno vrijednosti tipa double. 
Ispisati na zaslon sadržaj datoteke podaci.dat onim redom kojim su njihovi redni brojevi zapisani u datoteci index.txt.
Npr. za sadržaj datoteke index.txt: 3 5 1 4 2
Ispisati na zaslon prvo 3. vrijednost iz datoteke podaci.dat, potom 5., 1., 4., te naposljetku 2. zapisanu vrijednost.*/
#include<stdio.h>
int main(void)
{
	FILE *index, *podaci;
	index = fopen("index.txt", "r");
	if (index == NULL)
		return 1;
	podaci = fopen("podaci.dat", "r");
	if (podaci == NULL)
		return 2;
	double vrijednost_iz_bin_datoteke[5];
	fread(vrijednost_iz_bin_datoteke, sizeof(double), 5, podaci);
	int indexi[5];
	int brojac_indexa = 0;
	while(fscanf(index, "%d", indexi)!=EOF)
	{
		

	}
	

	return 0;
}