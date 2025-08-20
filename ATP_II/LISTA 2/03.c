#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz1[2][2], matriz2[2][2];
    int iguais=1;
    printf("Digite a primeira matriz: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("Digite a segunda matriz: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        scanf("%d", &matriz2[i][j]);
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        if(matriz1[i][j] != matriz2[i][j]){
            iguais=0;
            break;
        }
        }
        if (!iguais) break; // já não são iguais

    }
    if (iguais)
        printf("As matrizes são iguais.\n");
    else
        printf("As matrizes não são iguais.\n");
}
