/*Konzervativni nizovi su oni nizovi cijelih brojeva koji po�inju s 1, 
a svaki idu�i �lan im je ili to�no za jedan ve�i od njemu direktno prethodnog
ili je identi�an nekom (bilo kojem) prethodnom �lanu niza.
Npr. niz: 1, 1, 2, 3, 4, 2, 4 jest konzervativan
dok niz: 1, 2, 3, 3, 1, 2, 4, 5 nije jer �lan s vrijedno��u 4 nije niti za jedan ve�i od njemu direktno prethodnog 
(2) niti se ranije pojavljivao u nizu.
Napi�ite funkciju koja prima jedan niz cijelih brojeva te vrati 1 ako je on konzervativan, a 0 ina�e.*/
#include <stdio.h>

int main(void)
{
	int niz[7] = { 1, 1, 2, 3, 4, 2, 4 };
	
	funkcija_je_li_konzervativan_niz(niz, 7);

	getchar();
	getchar();

	return 0;
}
int funkcija_je_li_konzervativan_niz(int *niz, int duljina)
{


}