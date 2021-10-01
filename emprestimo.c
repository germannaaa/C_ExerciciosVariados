#include <stdio.h>
#include <conio.h>


int main() {

float valor, parcelas, salario, valorparcela, porcentagem;

printf ("Digite o valor do emprestimo solicitado. \n");
    scanf("%f", &valor);

printf ("Digite a quantidade de parcelas que deseja. \n");
    scanf("%f", &parcelas);
    
printf ("Digite o valor do seu salario. \n");
    scanf("%f", &salario);

valorparcela = valor / parcelas;
porcentagem = salario * 0.30;

if ( valorparcela < porcentagem ) {
     printf ("Emprestimo aprovado! Valor da parcela de R$ %f \n", valorparcela);
}

    else { 
        printf ("Emprestimo nao pode ser concedido. \n");
        } 


printf ("\n Pressione qqr tecla para encerrar \n ");

    getch ();
 
return (0);
}