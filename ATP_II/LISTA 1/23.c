#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>

int main(){
    int array[10];
    int simetrico = 1;

    for(int i=0;i<10;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i=0;i<5;i++){
        if(array[i]!= array[9-i]){
            simetrico=0;
            break;
        }
    }

    if(simetrico==1){
        printf("simetrico");
    }
    else{
         printf("Não simetrico");
    }
}
