#include <stdio.h>

int main(void) {
  printf("Tabuada \n");

    int tabuada = 5;
    int x;
    printf("\n Tabuada do 5 \n>>> ");
    //scanf("%i", &tabuada);

    for (x = 1; x<=10; x++){
        printf("%i x %i = %i\n", x, tabuada, x * tabuada);
    }


  return 0;
}




