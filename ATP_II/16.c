#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a fun��o isupper()*/

int main(){
   char array[10];
   char *ponteiro = array;
   int contador=0;

   for(int i=0;i<10;i++){
       printf("Didite o %d caractere: ", i+1);
       scanf(" %c", &array[i]);
       /*Quando voc� l� caracteres, o scanf tamb�m pega o \n (Enter) que o usu�rio digita.
    Para evitar isso, coloque um espa�o antes do %c no formato: " %c".*/
   }

   for(int i=0;i<10;i++){
       if(isupper(*ponteiro)){
        contador++;
       }
        ponteiro++;
   }
    printf("Quantidade de letras mai�sculas: %d\n", contador);

}
