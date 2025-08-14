#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void achar_max(int *vetor, int *max){ /*usar void qnd n�o vai retornar nenhum n�mero*/
    int i;
    *max = vetor[0];
    /* Quando voc� passa um ponteiro para uma vari�vel, est� passando o endere�o dela.
    A� a fun��o pode acessar e modificar diretamente o conte�do na mem�ria dessa vari�vel original.*/
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

    printf("\nO maior n�mero �: %d ", max);
}
