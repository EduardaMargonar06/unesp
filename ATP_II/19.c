#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a fun��o isupper()*/

int main(){
   float array[8]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
   float *ponteiro;
   float soma=0.0;

   ponteiro=array;
   for(int i=0;i<8;i++){
      soma += *(ponteiro + i);

      /*qual a diferen�a de usar e n�o usar Aritm�tica de ponteiros?
      quando usa o descolcamento � calculado ex:*(ponteiro + i)
      quando n usa s� muda o valor do endere�o ex: p++  */
   }

   printf("Soma dos elementos: %.2f\n", soma/8.0);
}
