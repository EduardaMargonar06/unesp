#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

void copia(int M[3][3], int copia[3][3]) {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            copia[i][j] = M[i][j];
        }
    }
    
}

int main(){
    int matriz[3][3];
    int matriz_copiada[3][3];
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    copia(matriz, matriz_copiada);
    printf("\n");
    printf("Copia da matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d ", matriz_copiada[i][j]);
        }
        printf("\n");
        
    }
    
    
}
