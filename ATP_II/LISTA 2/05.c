#include <stdlib.h>
#include <stdio.h>

void transposicao(int M1[3][2], int trans[2][3]){
    
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            trans[j][i] = M1[i][j]; 
        }
    }
    
}

int main(){
    int matriz[3][2], transposta[2][3];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0; j<2;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    transposicao(matriz,transposta);
    
     printf("matriz transposta: \n");
    for(int i=0;i<2;i++){
        for(int j=0; j<3;j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    
}
