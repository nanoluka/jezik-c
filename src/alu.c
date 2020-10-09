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

Primjer 3 od 10: alu.c

See LICENSE.txt for license details.
*************************************/
#include <stdio.h>      
int main() {
  int a = 2;
  int b = 4;
  char c = 'a';
  float d = 6.2;

  printf("zbir: a+b = %d\n", a+b);
  printf("razlika: a-b = %d\n", a-b);
  printf("proizvod: a*c = %d\n", a*c);
  printf("kolicnik: a/b= %d\n", a/b);
  printf("kolicnik: a/d= %f\n", a/d);
  printf("jednakost: a == b = %d\n", a==b);
  printf("binarno I: a & b = %d\n", a & b);
  printf("logicko I: a && b = %d\n", a && b);
  return 0;
}
