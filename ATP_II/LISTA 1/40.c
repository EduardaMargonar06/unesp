#include <stdlib.h>
#include <stdio.h>

void invert(int num[], int tamanho){
    int temp;
    
    for(int i=0;i<tamanho;i++){
        temp=num[i];
        num[i] = num[tamanho - 1 - i];
        num[tamanho - 1 - i] = temp;
    }
}

int main(){
    int numeros[8];
    
    printf("Digite 8 números inteiros: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }
    
    invert(numeros, 8);

   
    printf("Array invertido: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }
    
}
