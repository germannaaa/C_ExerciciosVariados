#include <stdio.h>


int main(void) {
   
int i;
printf ("1 eh primo \n2 eh primo \n3 eh primo\n");

    for (i=4; i <=100; i++){
        int  contadorresto = 0;
        if (i%2 !=0) {
            int j;
            for(j = i; j>0; j--) {
                if (i%j ==0) {
                    contadorresto++;
                }

            }
            if (contadorresto ==2) {
                printf ("%d eh primo \n", i);
            }
        }

    }

  return (0);
}