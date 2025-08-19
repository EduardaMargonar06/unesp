#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/

int main(){
   char array[12]={'a','b','c','d','e','f','g','h','i','j','k','l'}, invert[12];
   char *ponteiro;
   int j=0;

   ponteiro = array;

   for(int i=11;i>=0;i--){
       invert[j]= *(ponteiro + i);
       printf("%c ", invert[j]);
       j++;
   }
}
