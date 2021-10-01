#include <stdio.h>
#include <conio.h>


int main(void) {

printf (" \n\n\n\n");
printf ("////////////////////////////////// \n");
printf ("Bem vindos aos programas da Ge \n");
printf ("////////////////////////////////// \n");
printf ("\n\n\n\n");
printf ("CALCULADORA SIMPLES \n\n\n\n");

int numero1, numero2, soma, subtracao, multiplicacao, divisao;

printf ("Digite primeiro numero: \n");
scanf ("%i", &numero1);

printf ("Digite segundo numero: \n");
scanf ("%i", &numero2);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;


printf ("Sua soma eh %i \n", soma);
printf ("Sua subtracao eh %i \n", subtracao);
printf ("Sua multiplicacao eh %i \n", multiplicacao);
printf ("Sua divisao eh %i \n\n\n", divisao);

printf ("Pressione qualquer tecla para finalizar \n");

getch ();


return(0);
};
