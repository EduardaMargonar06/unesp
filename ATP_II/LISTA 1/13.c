#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int array[5]={1,2,3,4,5};
   int *ponteiro;

   ponteiro = array;

   for(int i=0;i<5;i++){
       printf("%d ", *ponteiro);
      ponteiro++;
   }
}
