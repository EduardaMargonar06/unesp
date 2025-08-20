#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4]= {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    int soma=0;
     printf("matriz: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("| %d |", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }
    printf("Soma: %d", soma);
    
}
