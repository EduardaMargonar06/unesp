#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/

void rotacao(int M[4][4], int M_rot[4][4]) {
  
  for(int i=0; i<4;i++){
      for(int j=0;j<4;j++){
          M_rot[j][4-1-i] = M[i][j]; 
      }
  }
}

int main(){
    int matriz[4][4], rotaciona[4][4];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    rotacao(matriz, rotaciona);
    printf("Matriz rotacionada 90º: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ", rotaciona[i][j]);
        }
        printf("\n");
    }
}
