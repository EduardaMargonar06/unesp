#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int array[10], soma=0;

    srand(time(NULL)); /* inicializa cada vez um numero diferente*/
    for(int i=0;i<10;i++){
        array[i]= (rand() % 51) + 100;/* tamanho=(max - min + 1)*/
        printf("%d ", array[i]);
        soma+=array[i];
    }
    printf("\n%d", soma/10);
}
