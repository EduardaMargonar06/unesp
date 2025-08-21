#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

int encotra_maior(int M[3][3]) {
  int maior= INT_MIN;
  for(int i=0; i<3; i++){
      for(int j=0;j<3;j++){
          if(maior<M[i][j]){
              maior = M[i][j];
          }
      }
  }
  return maior;
}

int main(){
    int matriz[3][3];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    int maior = encotra_maior(matriz);
    printf("O maior elemento da matriz é: %d", maior);
    
}
