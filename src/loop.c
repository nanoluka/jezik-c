/* Prakticni primjeri uz predavanje

Uvod u programski jezik C kroz prakticne primjere

autora Aleksandar Pajkanovic, nanoluka.org

licenciran je pod 
Creative Commons Attribution-ShareAlike 4.0 International License.

Ovaj i ostale kodove mozete koristiti (mijenjati i dalje
upotrebljavati - cak i komercijalno) pod uslovom da
ovaj tekst zaglavlja ostane nepromijenjen i da tako nastali
materijal objavite pod istom licencom.

Za detalje o licenci procitajte LICENSE.txt, a ako niste 
dobili tu datoteku, onda pogledajte na veb stranici:
  http://creativecommons.org/licenses/by-sa/4.0/

Prateca prezentacija i ostali primjeri su dostupni na:
  github.com/nanoluka/jezik-c

Kontakt:
  nanolukaorg [at] gmail [dot] znatevec

Primjer 6 od 10: loop.c

See LICENSE.txt for license details.
*************************************/
#include <stdio.h>
int main()
{    
	int a;
    int f = 1;
    printf("Unesite broj: ");
    scanf("%d", &a);  
    
    int i;
    for(i = 0; i<a; i++){
        printf("Ispisujem %d. put\n", i+1);
        f = f * (i+1);
        }
    printf("Faktorijel broja %d je: %d\n", a, f);
    
    return 0;
}
