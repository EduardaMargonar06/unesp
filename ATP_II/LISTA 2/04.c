#include <stdlib.h>
#include <stdio.h>
void Multiplicacao(int M1[3][3], int M2[3][3], int M3[3][3]){
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            M3[i][j] = 0;
            for (k = 0; k < 3; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}
int main(){
   int matriz1[3][3], matriz2[3][3], resultado[3][3];
   
   printf("Digite a primeira matriz: \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d", &matriz1[i][j]);
       }
   }
   
    printf("Digite a segunda matriz: \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d", &matriz2[i][j]);
       }
   }
   
   Multiplicacao(matriz1, matriz2, resultado);

    printf("\nResultado da multiplicacao das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
   
   
}
