#include <stdio.h>
#include <conio.h>


int main(void) {

int numero1, resto1, numero2, resto2, soma;

printf("Introduza um numero inteiro com 3 algarismos para obter a soma dos seus digitos \n");
scanf("%d",&numero1);
soma=0;

    if (numero1 > 0){

    resto1 = numero1 % 100;
    numero1 = (numero1 - resto1)/100;
    resto2 = resto1 % 10;
    numero2 = (resto1 - resto2)/10;
    soma = numero1 + numero2 + resto2;

printf ("O somatorio dos algarismos eh %d. \n", soma);
    }

    else {
        printf ("Numero invalido. \n");
    }
printf ("Pressione qqr tecla para encerrar \n ");

 getch ();
 
return (0);
}