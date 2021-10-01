#include <stdio.h>

int main(void) {

int idade;
printf ("Escreva a sua idade,\n");
scanf ("%d", &idade);

printf ("Sua idade eh %d\n", idade);

    if (idade >= 18) {
        printf ("Maior de idade\n");
        }
        
        else {
        printf ("Pivete\n");
         }
  return (0);
}
