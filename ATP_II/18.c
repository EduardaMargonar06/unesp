#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a fun��o isupper()*/

int main(){
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int *ponteiro, soma=0;

   ponteiro=array;
   for(int i=0;i<10;i++){
      soma += *(ponteiro + i);

      /*qual a diferen�a de usar e n�o usar Aritm�tica de ponteiros?
      quando usa o descolcamento � calculado ex:*(ponteiro + i)
      quando n usa s� muda o valor do endere�o ex: p++  */
   }

   printf("Soma dos elementos: %d\n", soma);
}
