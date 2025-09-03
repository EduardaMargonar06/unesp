#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int ocorrencias(int array[], int tam, int n) {
    if (tam == 0) return 0; // caso base: array vazio
    if (array[tam - 1] == n)
        return 1 + ocorrencias(array, tam - 1, n);
    else
        return ocorrencias(array, tam - 1, n);
}

int main() {
    int tam, oc;
    
    printf("Digite o tamanho: ");
    scanf("%d", &tam); 
    int num[tam];
    printf("Digite os números: ");
    for(int i=0;i<tam;i++){
        scanf("%d", &num[i]);
    }
    printf("Digite o número que vc quer ver a ocorrencia: ");
    scanf("%d", &oc); 
    int vezes= ocorrencias(num, tam, oc);
    printf("O número %d aparece %d vezes no array.\n", oc, vezes);
}
