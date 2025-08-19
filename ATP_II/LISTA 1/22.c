#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>

int main(){
   int array[20], cont_par=0, cont=0;

   for(int i=0;i<20;i++){
       printf("Digite o %d: ", i+1);
       scanf("%d", &array[i]);

       if(array[i]%2==0){
           cont_par++;
       }
       else{
           cont++;
       }
   }

   printf("Qtd de pares: %d\nQtd de impares: %d", cont_par, cont);
}
