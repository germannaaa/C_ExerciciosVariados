#include <stdio.h>
#include <conio.h>


int main() {

int idade;

printf ("Escreva sua idade. \n");
    scanf("%d", &idade);


if ( idade >= 18 ) {
    printf ("Voce eh maior de idade! \n");
}

    else { 
          printf ("Voce ainda eh menor de idade. \n");
    }


printf ("\n Pressione qqr tecla para encerrar \n ");

    getch ();
 
return (0);
}