#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

bool matriz_diagonal(int M[4][4]) {
  for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i != j && M[i][j] != 0){
                return false; 
            }
        }
    }
    return true;
}

int main(){
    int matriz[4][4];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    if(matriz_diagonal(matriz)){
        printf("É uma matriz diagonal");
    }else{
        printf("Não é uma matriz diagonal");
    }
    
    
}
