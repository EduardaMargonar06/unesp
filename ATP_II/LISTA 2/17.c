#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */

bool achar_elemento(int M[3][3], int N){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (N == M[i][j]) {
                printf("O elemento %d foi encontrado na linha %d e coluna %d\n", N, i, j);
                return true; 
            }
        }
    }
    printf("O elemento %d não foi encontrado na matriz.\n", N);
    return false; 
}

int main(){
    int matriz[3][3];
    int numero;
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("Digite o número que sera procurado na matriz: \n");
    scanf("%d", &numero);
    
    achar_elemento(matriz, numero);
    
    
}
