/*Napisati program koji će korisniku ponuditi na izbor 4 operacije:
 1. Usporedba dvaju stringova (korisnik unosi 2 stringa)
 2. Kopiranje vrijednosti jednog stringa u drugi (korisnik unosi prvi string)
 3. Postavljanje prvih n slova stringa na neku vrijednost (korisnik unosi string,
 „zamjensko“ slovo i koliko slova želi „pregaziti“ s tim novim slovom). Npr. ako je
 korisnik unio riječ program te nakon toga za slovo unio x, a za broj slova 3 rezultat
 treba biti xxxgram.
 4. Provjeru da li u riječi koju je korisnik unio postoji slovo a.
 Ovisno o odabiru korisnika obaviti potrebne operacije.
 NAPOMENA: koristiti standardne funkcije za rad s blokovima memorije.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned odabir_operacije;
    printf("Unesite broj za operaciju koju zelite unijeti:\n 1. Usporedba stringova\n 2. Kopiranje iz jednog u drugi\n 3. zamjena slova\n 4. provjera ima li slova a\n");
    scanf("%u", &odabir_operacije);
    switch (odabir_operacije)
    {
        case 1:
        {
            int kakvi_su_stringovi=0;
            char prvi_niz[20];
            char drugi_niz[20];
            printf("Unesite prvi pa drugi niz\n");
            scanf("%s %s", prvi_niz, drugi_niz);
            kakvi_su_stringovi=memcmp(prvi_niz, drugi_niz, 19);
            if(kakvi_su_stringovi==0)
                printf("Isti su\n");
            else printf("Nisu isti\n");
        }
            break;
        case 2:
        {
            char prvi_niz[20];
            char drugi_niz[20];
            printf("Unesite prvi niz\n");
            scanf("%s", prvi_niz);
            puts(memcpy(drugi_niz, prvi_niz, 19));
        }
            break;
        case 3:
        {
            char prvi_niz[20];
            char slovo;
            int koliko_slova;
            printf("Unesite string, zamjensko slovo i koliko slova zelite pregaziti:\n");
            scanf("%s", prvi_niz);
            scanf(" %c", &slovo);
            scanf("%d", &koliko_slova);
            puts(memset(prvi_niz, slovo, koliko_slova));
        }
            break;
        case 4:
        {
            char prvi_niz[20];
            printf("Unesite string i provjeriti cu ima li slovo a.\n");
            scanf("%s", prvi_niz);
            if(memchr(prvi_niz, 'a', 19)!=NULL)
                printf("Postoji slovo a u unesenom stringu.\n");
            else printf("Ne postoji slovo a u unesenom stringu.\n");
        }
            break;

        default:
            printf("Niste odabrali brojeve od 1 do 4.\n");
            break;
    }
    return 0;
}
