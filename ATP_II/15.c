#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int array[7]={1,2,3,4,5,6,7};
   int *ponteiro, soma=0;

   ponteiro = array;

   for(int i=0;i<7;i++){
       soma+=*ponteiro;
       ponteiro++;
   }
   printf("Soma: %d", soma);
}
