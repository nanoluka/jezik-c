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

Primjer 5 od 10: branch.c

See LICENSE.txt for license details.
*************************************/
#include <stdio.h>
int main()
{
    int a;
    printf("Unesite broj: ");
    scanf("%d", &a);  
    
    //pronadjite semanticku gresku
    if (a > 9) {
        printf("Broj %d je dvocifren", a);}
    else if (a > 99) {
        printf("Broj %d je trocifren", a);}
    else {
        printf("Broj %d je jednocifren", a);}
        
    return 0;
}
