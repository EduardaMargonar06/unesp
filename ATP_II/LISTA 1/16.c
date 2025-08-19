#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/

int main(){
   char array[10];
   char *ponteiro = array;
   int contador=0;

   for(int i=0;i<10;i++){
       printf("Didite o %d caractere: ", i+1);
       scanf(" %c", &array[i]);
       /*Quando você lê caracteres, o scanf também pega o \n (Enter) que o usuário digita.
    Para evitar isso, coloque um espaço antes do %c no formato: " %c".*/
   }

   for(int i=0;i<10;i++){
       if(isupper(*ponteiro)){
        contador++;
       }
        ponteiro++;
   }
    printf("Quantidade de letras maiúsculas: %d\n", contador);

}
