#include <stdio.h>

int main(void) {

 int numero;
 int cont = 100;

do {
   cont++;
   //printf ("Numeros impares");

   if ( cont % 2 != 0)
      printf ("Impar: %d\n", cont);
}
   while ( cont < 300 );

  return 0;
}
