#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/

bool simetrica(int M1[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (M1[i][j] != M1[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    int matriz[3][3], transposta[3][3];
    
    printf("Digite a matriz: \n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d", &matriz[i][j]);
       }
   }
   printf("\n");
   printf("Matriz transponta: \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
   printf("\n");
    if(simetrica(matriz)){
        printf("É simetrica");
    }else{
        printf("Não é simetrica");
    }
}
