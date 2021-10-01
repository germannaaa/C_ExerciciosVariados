#include "stdio.h"
#define FALSE 0
#define TRUE 1

int main(void) {
  printf("Iae pessoa\n");
 
 int n, d, primo;
 d = 2;
 primo = TRUE;

 printf ("Escreva um numero para saber se eh primo \n"  );
 scanf ("%d", &n);
 printf ("Numero dado = %d \n", n);

 if (n<=1 || (n !=2 && n % 2 == 0 )) primo = FALSE;
 else primo = TRUE;

 d=3;
 while (primo && d<= n/2) {
   if ( n % d == 0 ) primo = 0;
   d=d+2;
 }

 if (primo) printf (" %d eh primo \n", n );
 else printf (" %d nao eh primo \n", n );

  return (0);
}