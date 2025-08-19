#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int retorna_Ma(int *vetor, int *maior){
    
    for(int i=0;i<5;i++){
        if(*vetor[i]> *maior){
            *maior = *vetor[i];
        }
        
    }
    
    return *maior;
}

int main()
{
    int *numeros[5];
    int maior=INT_MIN;
    
    for(int i=0;i<5;i++){
        numeros[i] = malloc(sizeof(int));
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", numeros[i]);
    }
    retorna_Ma(numeros, &maior);
    printf("O maior valor digitado foi: %d\n", maior);

    
    for (int i = 0; i < 5; i++) {
        free(numeros[i]);
    }
    return 0;
}

