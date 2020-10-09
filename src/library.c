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

Primjer 7 od 10: library.c

See LICENSE.txt for license details.
*************************************/
#include <math.h>
#include <stdio.h>

int main() {
    float a = 3, e = 4, r = 0;

    r = pow(a, e);

    printf("%.1lf^%.1lf = %.2lf", a, e, r);
    return 0;
}
