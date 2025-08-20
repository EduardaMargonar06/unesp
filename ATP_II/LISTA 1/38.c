#include <stdlib.h>
#include <stdio.h>

int maior(int num[], int tamanho){
    int maior= num[0];
    
    for(int i=1;i<tamanho;i++){
        if(maior<num[i]){
            maior=num[i];
        }
    }
    return maior;
}

int main(){
    int numeros[10];
    
    printf("Digite 10 números inteiros: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    int resultado_MA = maior(numeros, 10); 
    
    printf("O maior numero dos elementos é: %d\n", resultado_MA);
    
}
