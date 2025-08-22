#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */

bool verificar_identidade(int M[3][3]){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j && M[i][j] != 1){ 
                printf("Não é uma matriz identidade");
                return false; 
                }
            else if(i != j && M[i][j] != 0){ 
                printf("Não é uma matriz identidade");
                return false;
            }
        }
    }
    printf("É uma matriz identidade");
    return true; 
}

int main(){
    int matriz[3][3];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
   
    
    verificar_identidade(matriz);
    
    
}
