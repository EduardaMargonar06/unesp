#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int vetor[5]={1,2,3,4,5};
   int *ponteiro;

    ponteiro = vetor;
   for(int i=0;i<5;i++){
       printf("Antes: %d, ", vetor[i]);

   }
   printf("\n");

   for(int i=0;i<5;i++){
       vetor[i] = *ponteiro+10;
       printf("Depois: %d, ", vetor[i]);
       ponteiro++;
   }
}
