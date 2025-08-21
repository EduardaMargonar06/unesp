#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

float medias(int M[2][4]) {
  float medias=0;
  for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            medias += M[i][j];
        }
    }
    return medias/8.0;
}

int main(){
    int matriz[2][4];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    float media = medias(matriz);
    printf("A media dos elementos é %.2f", media);
    
    
}
