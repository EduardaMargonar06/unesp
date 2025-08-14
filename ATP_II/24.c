#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/

int verif_Posi(int *vetor){

   for(int i=0;i<5; i++){
       if(vetor[i]<0){
           return false;
       }
   }
    return true;
}
int main(){
    int numeros[5];


    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    bool resultado=verif_Posi(numeros);

    if(resultado==true){
        printf("Todos são positivos");
    }
    else
        printf("Nem todos são positivos");

}
