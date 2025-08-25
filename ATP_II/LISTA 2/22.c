#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 4

void ordena(int M[N]) {
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if (M[j] > M[j + 1]) {
                int temp = M[j];
                M[j] = M[j + 1];
                M[j + 1] = temp;
            }
        }
    }
}

int main(){
    int matriz1[N][N];
    srand(time(NULL));
    
    printf("A matriz: \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matriz1[i][j] = rand()%100+1;/*coloquei de 1 a 100*/
           printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < N; i++) {
        ordena(matriz1[i]);
    }
    
     printf("\nMatriz ordenada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matriz1[i][j]); /* %3d isso serve para deixar mais bunitinho o espaçamento */
        }
        printf("\n");
    }
}
