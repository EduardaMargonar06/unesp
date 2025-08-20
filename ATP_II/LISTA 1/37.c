#include <stdlib.h>
#include <stdio.h>

float media(int num[], int tamanho){
    int soma=0;
    
    for(int i=0;i<tamanho;i++){
        soma+=num[i];
    }
    return (float)soma / tamanho;
}

int main(){
    int numeros[5]={1,2,3,4,5};
    
    float resultado = media(numeros, 5); 
    
    printf("A média dos elementos é: %.2f\n", resultado);
    
}
