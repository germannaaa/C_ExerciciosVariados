#include <stdio.h>
//#include <conio.h>

int main(void) {
  printf("Hello World\n");

  //int conta = 0;
  //int total = 0;

  //while (conta<10){
    //total += conta;
    //printf ("Conta =%d, total =%d\n.", conta++, total);
  //}


  //int conta = 0;
  //printf ("Digite uma frase: \n");
  
  //while (getchar() != '\n')
   // conta++;
   // printf ("O numero de caracteres eh: %d", conta);


char ch, c;
char ch1 = 's';
int tentativas;

while (ch1== 's'){
  ch = rand()%26 + 'a';
  tentativas = 1;
  printf ("\n Digite uma letra de 'a' a 'z': \n");
  
  while ((c = getchar()) != ch){
    printf ("%c incorreta. tente novamente\n", c);
    tentativas++;
  }
  printf ("\n %c eh correto", c);
  printf ("\n voce acertou em %d tentativas.", tentativas);
  printf ("\n quer jogar dnvo? (s/n):");
  ch1 = getchar();
}

  return 0;
}