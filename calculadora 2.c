#include <stdio.h>
#include <conio.h>


int main(void) {

printf (" \n\n\n\n");
printf ("////////////////////////////////// \n");
printf ("Bem vindos aos programas da Ge \n");
printf ("////////////////////////////////// \n");
printf ("\n\n\n\n");
printf ("CALCULADORA SIMPLES \n\n\n\n");

int numero1, numero2, soma, subtracao, multiplicacao, divisao, operacao;

printf ("Digite primeiro numero: \n");
scanf ("%i", &numero1);

printf ("Digite segundo numero: \n");
scanf ("%i", &numero2);

printf ("Escolha a operacao: \n");
printf ("Soma tecle 1 \n");
printf ("Subtracao tecle 2 \n");
printf ("Multiplicacao tecle 3 \n");
printf ("Divisao tecle 4 \n");
scanf ("%i", &operacao);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

switch ( operacao ) {
case 1 :
printf ("Sua soma eh %i \n", soma );
break;

case 2 : 
printf ("Sua subtracao eh %i \n", subtracao );
break;

case 3 :
printf ("Sua multiplicacao eh %i \n", multiplicacao);
break;

case 4: 
printf ("Sua divisao eh %i \n", divisao);
break;

default:
printf ("Escolha invalida! \n");
}

printf ("Pressione qualquer tecla para finalizar \n");

getch ();


return(0);
};
