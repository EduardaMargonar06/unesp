#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>

int main(){
   int array[10];
   int maior= INT_MIN, menor=INT_MAX;

   for(int i=0;i<10;i++){
       printf("Digite o %d: ", i+1);
       scanf("%d", &array[i]);

       if(array[i]>maior){
           maior=array[i];
       }
       if(array[i]<menor){
           menor=array[i];
       }
   }

   printf("Maior: %d\nMenor: %d", maior, menor);
}
