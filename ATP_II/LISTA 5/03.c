#include <stdio.h>
#include <limits.h>


int maior(int N[], int tam){
    
    if(tam == 1){
        return N[0];
    }
    int max_restante = maior(N, tam - 1);
    if (N[tam - 1] > max_restante) {
        return N[tam - 1];
    } else {
        return max_restante;
    }
}


int main()
{
    int tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
    
    int array_num[tam];
    printf("\n");
    printf("Digite o array -- \n");
    for(int i=0;i<tam;i++){
        printf("Digite %dº número: ", i+1);
        scanf("%d", &array_num[i]);
        
    }
    
    int maior_num = maior(array_num, tam);
    printf("O maior número do array é: %d\n", maior_num);

    
}
