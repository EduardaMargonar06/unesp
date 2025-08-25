#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 3

int ordena(int M[N][N]) {
  return M[0][0]*(M[1][1]*M[2][2] - M[1][2]*M[2][1])
         - M[0][1]*(M[1][0]*M[2][2] - M[1][2]*M[2][0])
         + M[0][2]*(M[1][0]*M[2][1] - M[1][1]*M[2][0]);
}

int main(){
    int matriz1[N][N];
    srand(time(NULL));
    
    printf("Digite a matriz: \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\nO determinante da matriz é: %d ", ordena(matriz1)); /* %3d isso serve para deixar mais bunitinho o espaçamento */
}
