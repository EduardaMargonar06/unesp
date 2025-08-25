#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */

int soma_coluna(int M[4][3], int resul[3]){
    for(int j=0;j=0;j++){
        resul[j]=0; /*precisa zerar ele primeiro, se n ele vai pegar o lixo na memoria*/
    }
    for(int i=0;i<4;i++){
        for (int j=0;j<3;j++){
           resul[j] += M[i][j];
        }
    }
    
    
}

int main(){
    int matriz1[4][3], 
        resul[3];
    
    printf("Digite a primeira matriz: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
           scanf("%d", &matriz1[i][j]);
        }
    }
    
    soma_coluna(matriz1,resul);
    
    printf("\nResultado soma das colunas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d coluna: %d\n", i+1,resul[i]);
    }
}
