#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>

void inverter(int M[3][3]){
    int temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp = M[0][j];
            M[0][j] = M[2][j];
            M[2][j] = temp;
        }
    }
    
}

int main(){
    int matriz[3][3];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    inverter(matriz);
    
    printf("\n");
    printf("Matriz invertida: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    
}
