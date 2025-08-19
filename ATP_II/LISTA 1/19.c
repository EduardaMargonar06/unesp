#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/

int main(){
   float array[8]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
   float *ponteiro;
   float soma=0.0;

   ponteiro=array;
   for(int i=0;i<8;i++){
      soma += *(ponteiro + i);

      /*qual a diferença de usar e não usar Aritmética de ponteiros?
      quando usa o descolcamento é calculado ex:*(ponteiro + i)
      quando n usa só muda o valor do endereço ex: p++  */
   }

   printf("Soma dos elementos: %.2f\n", soma/8.0);
}
