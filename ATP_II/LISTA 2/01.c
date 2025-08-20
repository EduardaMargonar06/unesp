#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[3][3]= {{1,2,3}, {1,2,3}, {1,2,3}};
    
     printf("matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("| %d |", matriz[i][j]);
        }
        printf("\n");
    }
}
