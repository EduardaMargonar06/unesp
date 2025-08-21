#include <stdlib.h>
#include <stdio.h>

int soma_diagonal(int M1[5][5]){
   int soma=0;
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
           if(i==j){
               soma += M1[i][j];
           }
        }
    }
   return soma;
}

int main(){
    int matriz[5][5];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
  int soma = soma_diagonal(matriz);
    
     printf("A soma da diagonal da matriz: %d", soma);
    
}
