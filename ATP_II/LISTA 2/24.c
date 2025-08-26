#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 3

void multiplica(int M1[N][N], int M2[N][N], int trans[N][N]){
    for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
             trans[i][j]=0;
             for(int k=0;k<N;k++){
                 trans[i][j] += M1[i][k] * M2[k][j];
             }
          }
      }
}

bool verifica_identidade(int trans[N][N]){
    for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
             if ((i == j && trans[i][j] != 1) || (i != j && trans[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

int main(){
  int matriz1[N][N],
      matriz2[N][N],
      identidade[N][N];
      
      printf("Digite a primeira matriz: \n");
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              scanf("%d", &matriz1[i][j]);
          }
      }
      
      printf("Digite a segunda matriz: \n");
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              scanf("%d", &matriz2[i][j]);
          }
      }
      
      multiplica(matriz1, matriz2, identidade);
      if(verifica_identidade(identidade)){
          printf("as matrizes sao ortofonais");
      }else{
          printf("as matrizes nao sao ortogonais");
      }
    
}
