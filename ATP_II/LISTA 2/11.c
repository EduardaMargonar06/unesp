#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

int pares(int M[3][3]) {
  int cont=0;
  
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          if(M[i][j] %2 == 0){
            cont++;
          }
      }
  }
  return cont;
}

int main(){
    int matriz[3][3]; 
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        scanf("%d",&matriz[i][j]);
      }
  }
  
  int qtd_pares = pares(matriz);
  printf("A quantidade de elementos pares é %d", qtd_pares);
}
