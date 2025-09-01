#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void invert(int *inicio, int *fim){
     if (inicio >= fim) return; 
     
    int temp = *inicio;
    *inicio = *fim;
    *fim = temp;
    invert(inicio + 1, fim - 1);
    
   
}


int main()
{
    int tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
    
    
    int array[tam];
    printf("\n\nDigite o array --\n");
    for(int i=0;i<tam;i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\nOrdem original: ");
    for(int i=0;i<tam;i++){
        printf("%d ", array[i]);
    }
    invert(array, array + tam - 1);
    printf("\nOrdem inverida: ");
    for(int i=0;i<tam;i++){
        printf("%d ", array[i]);
    }
}

    
