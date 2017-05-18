/*int usporedi(char* dat1, char* dat2, float prag);
 Funkcija uspoređuje odgovarajuće retke zadanih datoteka i ispisuje retke koji nisu
 „dovoljno slični“. Sličnost se izračunava tako da se uspoređuju znakovi na istim
 pozicijama u recima i ukoliko je više od prag posto znakova jednako – reci su slični. Osim
 toga, reci moraju biti iste duljine kako bi bili slični. Funkcija treba vratiti broj redaka koji
 nisu slični.*/

#include <stdio.h>
#include <string.h>
int usporedi(char* dat1, char* dat2, float prag);
int main(void)
{
    
    
    return usporedi("prva.txt", "druga.txt", 0.5);
}
int usporedi(char* dat1, char* dat2, float prag)
{
    int nisu_slicni, brojac, brojac_slova;
    char prva[20];
    char druga[20];
//    char buffer[1000];
    FILE *f1, *f2;
    f1=fopen(dat1, "r");
    if(f1==NULL)
        return 1;
    f2=fopen(dat2, "r");
    if(f2==NULL)
        return 1;
    while(fscanf(f1, "%s", prva) && fscanf(f2, "%s", druga)!=EOF)
    {
        brojac_slova=0;
        for (brojac=0; prva[brojac] != '\0'; ++brojac)
        {
            if((strlen(prva)==strlen(druga)) && (toupper(prva[brojac])==toupper(druga[brojac])))
                ++brojac_slova;
        }
        
        
    }
    
/*while(fgets(buffer, 1000, f1))
        puts(buffer);*/
    fclose(f1);
    fclose(f2);
    return nisu_slicni;
}
