#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 3

bool verifica_matriz_esparsa(int M[N][N]){
    int cont =0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(M[i][j] == 0){
                cont++;
            }
        }
    }
    if(cont >4){
        return true;
    }
    else{
        return false;
    }
}

int main(){
  int matriz1[N][N];
      
      
      printf("Digite a matriz: \n");
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              scanf("%d", &matriz1[i][j]);
          }
      }
      
      if(verifica_matriz_esparsa(matriz1)){
           printf("é uma matriz esparsa");
      }else
       printf("n é uma matriz esparsa");
    
}
