#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <math.h>

#define N 3

bool verificar_vandermonde(int M[N][N]) {
    for(int i=0; i<N; i++){
        if(M[i][0] != 1){
                return false;
            }
         int base = M[i][1];
        int esperado = base * base; 

        if (M[i][2] != esperado) {
            return false;
        }
    }
    return true;
}

int main(){
    int matriz[N][N];
    
    printf("Digite a matriz:\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    if(verificar_vandermonde(matriz)){
         printf("n é uma matriz vandermonde");
    }else{
        printf("é uma matriz vandermonde");
    }
    
}
