#include <stdio.h>

int main(void) {
  printf("Oi Pessoa\n");

  float notaMedia, p, t, p2, nota;

  printf("digite a nota trabalho \n");
  scanf("%f", &t);
  printf ("digite nota prova \n");
  scanf ("%f", &p);
  p2 = p*2;
  nota = t+p2;
  notaMedia = nota/3;
  if( notaMedia>6 ){
    printf ("APROVADO");
  }
  else{
    printf ("REPROVADO");
  }
  printf("O valor da media e %1f", notaMedia);

return (0);
}