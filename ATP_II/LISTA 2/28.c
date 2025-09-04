#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define N 4

void coloc_vetor(int matriz[N][N], int vetor[], int n){
    int k=0;
        
    for(int i=0; i<N;i++){
        for(int j=0; j<N;j++){
            vetor[k++]= matriz[i][j];
        }
    }
}
void ordenar(int array[], int n){
    int temp;
    for(int i=0; i< n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void matriz_orde(int vetor[], int n, int matriz[N][N]){
    int k=0;
     for(int i=0; i<N;i++){
        for(int j=0; j<N;j++){
            matriz[i][j] = vetor[k++];
        }
    }
}

int busca_bi(int matriz[N][N], int x){
    int inicio = 0;
    int fim = N*N - 1;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        int i = meio / N;  
        int j = meio % N; 

        if(matriz[i][j] == x){
            printf("Elemento %d encontrado na posicao [%d][%d]\n", x, i, j);
            return 1;
        }
        if(matriz[i][j] < x){
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    printf("Elemento %d nao encontrado na matriz.\n", x);
    return 0;
}

int main(){
    int matriz[N][N],
        n= N*N,
        vetor[n];
    
    
    printf("Digite a matriz: \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    coloc_vetor(matriz, vetor, n);
    ordenar(vetor, n);
   matriz_orde(vetor, n, matriz);
   
   printf("\nMatriz ordenada:\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDigite um numero para buscar: ");
    scanf("%d", &x);

    busca_bi(matriz, x);
}
