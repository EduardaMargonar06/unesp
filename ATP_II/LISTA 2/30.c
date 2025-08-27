#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

#define N 4

float soma(int M[N][N]) {
    int soma=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           soma += M[i][j];
        }
    }
    return soma/(N*N);
}

int main(){
    int matriz[N][N];
    
    printf("Digite a matriz:\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    float media= soma(matriz);
    printf("a media é: %.2f", media);
}
