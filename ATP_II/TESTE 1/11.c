#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void achar_max(int *vetor, int *max){ /*usar void qnd não vai retornar nenhum número*/
    int i;
    *max = vetor[0];
    /* Quando você passa um ponteiro para uma variável, está passando o endereço dela.
    Aí a função pode acessar e modificar diretamente o conteúdo na memória dessa variável original.*/
    for(i=0; i< 15; i++){
        if(vetor[i]>*max){
            *max = vetor[i];
        }
    }
}

int main(){

    int array[15], max;

    srand(time(NULL));

    for(int i=0;i<15;i++){
        array[i] = rand() % 51;
        printf("%d ", array[i]);
    }

    achar_max(array, &max);

    printf("\nO maior número é: %d ", max);
}
