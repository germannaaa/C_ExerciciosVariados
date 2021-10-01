#include <stdio.h>

int main(void) {
 int cont = 0;
 int tamanho = 20;
 int valor;
 double media;
 int maior = 0;
 int menor = 10000000000;

do {
   cont++;

    printf ("Digite um valor: \n");
    scanf ("%d", &valor);

        if ( valor > maior){
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }

        media += valor;
        // media = media + valor
}
    while (cont < tamanho);
     
 printf ("Maior valor eh %d. \n", maior);
 printf ("Menor valor eh %d. \n", menor);
 printf ("A media dos valores digitados eh %lf.\n", media/tamanho);
  return 0;
}
