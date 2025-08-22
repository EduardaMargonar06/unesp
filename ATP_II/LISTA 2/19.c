#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */

int multiplicacao(int M1[2][3], int M2[3][2], int resul[2][2]){
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            resul[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resul[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

int main(){
    int matriz1[2][3], 
        matriz2[3][2],
        resultada[2][2];
    
    printf("Digite a primeira matriz: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           scanf("%d", &matriz1[i][j]);
        }
    }
    printf("\n");
   printf("Digite a segunda matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           scanf("%d", &matriz2[i][j]);
        }
    }
    
    multiplicacao(matriz1,matriz2, resultada);
    
    printf("\nResultado da multiplicacao das matrizes:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultada[i][j]);
        }
        printf("\n");
    }
}
