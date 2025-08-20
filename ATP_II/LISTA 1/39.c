#include <stdlib.h>
#include <stdio.h>

int posi(int num[], int tamanho){
    int cont=0;
    
    for(int i=0;i<tamanho;i++){
        if(num[i]>0){
            cont++;
        }
    }
    return cont;
}

int main(){
    int numeros[6];
    
    printf("Digite 6 números inteiros: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }
    int resultado_posi = posi(numeros, 6); 
    
    printf("Qtd de elementos positivo: %d\n", resultado_posi);
    
}
