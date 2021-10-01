#include <stdio.h>


int main(void) { 

int a, resto;

for (a=1; a<=50; a++)
{
  resto = a % 2;
    if (resto%2==0) {
      printf ("Numeros pares: %d.\n", a);
       }

        else{
             printf ("Numeros impares: %d\n.", a);
        }
}
  return (0);
}