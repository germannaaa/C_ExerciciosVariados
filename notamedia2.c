#include <stdio.h>

int main(void) {
  printf("Oi Pessoa\n");

  float notaMedia, trabalho, trabalho2, avsemestral, avsemestral2, avfinal, avfinal2;

  printf("digite a nota trabalho \n");
  scanf("%f", &trabalho);
  printf ("digite nota prova semestral \n");
  scanf ("%f", &avsemestral);
  printf("digite a nota da avaliacao final \n");
  scanf("%f", &avfinal);

  trabalho2 = trabalho * 2;
  avsemestral2 = avsemestral * 3;
  avfinal2 = avfinal * 5;
  notaMedia = (trabalho2 + avsemestral2 + avfinal2) / 10;

  if( notaMedia <= 2.9 ) {
    printf ("Sua media foi %2.2f, e vc esta REPROVADO!\n", notaMedia);
  }

  else { 
      if ( notaMedia <= 4.9) {
          printf ("Sua media foi %2.2f, e vc esta em RECUPERACAO!\n", notaMedia);
        }

        else {
            printf ("Sua media foi %2.2f, e vc esta APROVADO!\n", notaMedia);
        }
  }
  
return (0);
}