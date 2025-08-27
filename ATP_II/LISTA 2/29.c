#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

#define N 3

void rotacao90(int M[N][N], int M_rot[N][N]) {
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M_rot[N-1-j][i] = M[i][j];
        }
    }
}

int main(){
    int matriz[N][N], rotaciona[N][N];
    
    printf("Digite a matriz %dx%d: \n", N, N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    rotacao90(matriz, rotaciona);

    printf("\nMatriz rotacionada 90 graus anti-horario:\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", rotaciona[i][j]);
        }
        printf("\n");
    }

    return 0;
}
