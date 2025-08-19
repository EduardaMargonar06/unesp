#include <stdio.h>

int main(){

    int vetor[10], soma;

    for(int i=0;i<10;i++){
        printf("Digite o %d: ", i+1);
        scanf("%d",&vetor[i]);


    }

    for (int i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    printf("Soma = %d", soma);
}
