/*U datoteci „osobe.dat“ pospremljeni su podaci o osobama prema strukturi:
 struct osoba
 {
 char imePrezime[50 + 1]; char dan[2];
 char mjesec[2];
 char godina[4];
 };
 Dan, mjesec i godina predstavljaju datum rođenja osobe.
 U datoteci „jmbg.txt“ su pospremljeni njihovi jedinstveni matični brojevi na način da prvi jmbg predstavlja matični broj prve osobe iz
 datoteke „osobe.dat“, drugi predstavlja matični broj druge osobe itd. Između matičnih brojeva nema razmaka.
 Potrebno je napisati program koji će od korisnika zatražiti redni broj osobe te se nakon toga dohvaća jmbg te osobe i provjerava se da
 li je točan.
 U ovom slučaju jmbg smatramo validnim ako podaci o danu, mjesecu i godini iz pročitanog jmbg-a odgovaraju podacima zapisanim za
 dohvaćenu osobu.
 Npr. ako u datoteci „osobe.dat“ imamo zapisane slijedeće podatke o osobama:
 - Pero Peric, 12 , 06, 1990
 - Ana Anic, 08, 11, 1995
 - Ante Antic, 04 , 10 1998
 a u datoteci „jmbg.txt“ imamo zapisano:
 1206990123456 0811995123456 0310998123456 (bez razmaka)
 tada nam za osobe 1 i 2 program treba ispisati da je jmbg točan dok nam za osobu broj 3 program treba ispisati da jmbg nije točan jer
 je osoba rođena 4.10.1998, a ne 3.10.1998.*/
#include <stdio.h>
struct osoba
{
    char imePrezime[50 + 1];
    char dan[2];
    char mjesec[2];
    char godina[4];
};
int funkcija_za_provjeru_jmbg (int redni_broj);
int main(void)
{
    int redni_broj;
    printf("Unesite redni broj osobe koju zelite provjeriti: \n");
    scanf("%d", &redni_broj);
    if (redni_broj<1)
    {
        printf("Unijeli ste krivi broj.\n");
        return 0;
    }
    else funkcija_za_provjeru_jmbg(redni_broj);
    return 0;
}
int funkcija_za_provjeru_jmbg (int redni_broj)
{
    //punjenje strukture
    struct osoba osobe[]=
    {
        {"Pero Peric", "12", "06", "1990"},
        {"Ana Anic", "08", "11", "1995"},
        {"Ante Antic", "04", "10", "1998"},
    };
    //otvaranje i punjenje binarne datoteke
    FILE *binarna;
    binarna=fopen("osobe.dat", "wb+");
    if(binarna==NULL)
        return 9;
    fwrite(osobe, sizeof(struct osoba), 3, binarna);
    fseek(binarna, 51, SEEK_SET);
    
    //otvaranje textualne datoteke
    FILE *textualna;
    textualna=fopen("jmbg.txt", "r");
    if(textualna==NULL)
        return 8;
    redni_broj-=1;
    //samo za slucaj izbora prve osobe gdje se kursor netreba micati na odredjeni pocetak
    if(redni_broj==0)
    {
        for(int brojac=0; brojac<4;++brojac)
        {
            char broj_usporedbe_bin=0, broj_usporedbe_txt=0;
            fread(&broj_usporedbe_bin, sizeof(char), 1, binarna);
            broj_usporedbe_txt=fgetc(textualna);
            if(broj_usporedbe_bin!=broj_usporedbe_txt)
            {
                fclose(binarna);
                fclose(textualna);
                printf("JMBG nije tocan.\n");
                return 2;
            }
        }
        
        //preskakanja prvog znaka godine rodjenja u bin datoteci
        fseek(binarna, 1, SEEK_CUR);
        for(int brojac=0; brojac<3;++brojac)
        {
            char broj_usporedbe_bin=0, broj_usporedbe_txt=0;
            fread(&broj_usporedbe_bin, sizeof(char), 1, binarna);
            broj_usporedbe_txt=fgetc(textualna);
            if(broj_usporedbe_bin!=broj_usporedbe_txt)
            {
                fclose(binarna);
                fclose(textualna);
                printf("JMBG nije tocan.\n");
                return 2;
            }
        }
        printf("JMBG je tocan.\n");
    }
    
    //za sve ostale odabire osoba
    else
    {
        fseek(binarna, redni_broj*110, SEEK_SET);
        fseek(textualna, redni_broj*13, SEEK_SET);
        for(int brojac=0; brojac<4;++brojac)
        {
            char broj_usporedbe_bin=0, broj_usporedbe_txt=0;
            fread(&broj_usporedbe_bin, sizeof(char), 1, binarna);
            broj_usporedbe_txt=fgetc(textualna);
            if(broj_usporedbe_bin!=broj_usporedbe_txt)
            {
                fclose(binarna);
                fclose(textualna);
                printf("JMBG nije tocan.\n");
                return 2;
            }
        }
        
        //preskakanja prvog znaka godine rodjenja u bin datoteci
        fseek(binarna, 1, SEEK_CUR);
        for(int brojac=0; brojac<3;++brojac)
        {
            char broj_usporedbe_bin=0, broj_usporedbe_txt=0;
            fread(&broj_usporedbe_bin, sizeof(char), 1, binarna);
            broj_usporedbe_txt=fgetc(textualna);
            if(broj_usporedbe_bin!=broj_usporedbe_txt)
            {
                fclose(binarna);
                fclose(textualna);
                printf("JMBG nije tocan.\n");
                return 2;
            }
        }
        printf("JMBG je tocan.\n");
    }
    fclose(binarna);
    fclose(textualna);
    return 1;
}
