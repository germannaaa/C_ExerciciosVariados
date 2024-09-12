#include <stdio.h>
#include <conio.h>


int main() {
    

int num1, num2, num3, maior;

printf ("Escreva o primeiro numero inteiro. \n");
    scanf("%d", &num1);

printf ("Escreva o segundo numero inteiro. \n");
    scanf("%d", &num2);
    
printf ("Escreva o terceiro numero inteiro. \n");
    scanf("%d", &num3);

if ( num1>num2 && num1>num3 ) {
    maior = num1;
}

    else { 
        if (num2>num1 && num2>num3) {
            maior = num2;
        } 

        else{
                maior = num3;
        }
          
    }

printf ("O maior numero digitado eh %d \n", maior);

printf ("\n Pressione qqr tecla para encerrar \n ");

    getch ();
 
return (0);
}
