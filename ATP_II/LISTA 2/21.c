#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */

bool verifica_permutacao(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        int soma_Linha = 0;
        for (int j = 0; j < 3; j++) {
            if (M[i][j] != 0 && M[i][j] != 1) {
                return false; 
            }
            soma_Linha += M[i][j];
        }
        if (soma_Linha != 1) {
            return false;
        }
    }

    
    for (int j = 0; j < 3; j++) {
        int soma_Coluna = 0;
        for (int i = 0; i < 3; i++) {
            soma_Coluna += M[i][j];
        }
        if (soma_Coluna != 1) {
            return false;
        }
    }

    return true;
}

int main(){
    int matriz1[3][3];
    
    printf("Digite a primeira matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d", &matriz1[i][j]);
        }
    }
    
    
    if(verifica_permutacao(matriz1)){
        printf("É uma matriz de permutacao");
    }else{
        printf("N é uma matriz de permutacao");

    }
}
