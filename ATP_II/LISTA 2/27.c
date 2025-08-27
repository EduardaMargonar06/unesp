#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 3

void multiplicacao(int M[N][N], int numero){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            M[i][j] = M[i][j]*numero;
        }
    }
    
    for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
               printf("%d ", M[i][j]);
          }
           printf("\n");
      }
}

int main(){
  int matriz1[N][N],
      escalar;
      
      
      printf("Digite a matriz: \n");
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              scanf("%d", &matriz1[i][j]);
          }
      }
      printf("\n");
      printf("Digite o escalar: ");
      scanf("%d",&escalar);
      
    multiplicacao(matriz1,escalar);
}
