#include <stdio.h>

int main(void) {
 int numero, maior, menor;
 //int i;
 float media;

 printf("Entre com um numero inteiro: ");
 scanf("%d", &numero);

 maior = numero;
 menor = numero;

 
    printf("\n Entre com mais um numero inteiro: ");
    scanf("%d", &numero);

    if (numero>maior){
        maior=numero;
    }
        else
             if(numero<menor) {
                menor=numero;
             }
             
    media = (maior+menor)/2;

 printf("\n O menor numero entrado e: %d", menor);
 printf("\n O maior numero entrado e: %d", maior);
 printf ("\n A media dos numeros dados eh: %.2f", media);
  return 0;
}
