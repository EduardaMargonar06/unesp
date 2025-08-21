#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

int encontra_menor(int M[4][4]) {
  int menor=INT_MAX;
  
  for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
          if(menor>M[i][j]){
              menor=M[i][j];
          }
      }
  }
  return menor;
}

int main(){
    int matriz[4][4]; 
    
    printf("Digite a matriz: \n");
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        scanf("%d",&matriz[i][j]);
      }
  }
  
  int menor = encontra_menor(matriz);
  printf("O menor elemento é %d", menor);
}
