#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


#define N 4
void ordenar(int M[N][N]){
    int temp;
    for(int i=0; i<N*N-1; i++){
        for(int j=i+1; j<N*N; j++){
            int li = i / N, ci = i % N;  
            int lj = j / N, cj = j % N;  

            if(M[li][ci] > M[lj][cj]){
                temp = M[li][ci];
                M[li][ci] = M[lj][cj];
                M[lj][cj] = temp;
            }
        }
    }
}

bool busca_binaria(int M[N][N], int x){
    int inicio = 0, fim = N*N - 1;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        int i = meio / N, j = meio % N;

        if(M[i][j] == x){
            printf("Elemento %d encontrado na posicao [%d][%d]\n", x, i, j);
            return true;
        }
        else if(M[i][j] < x){
            inicio = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }
    return false;
}

int main(){
  int matriz1[N][N], valor;
      
      
      printf("Digite a matriz: \n");
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              scanf("%d", &matriz1[i][j]);
          }
      }
      
      
    ordenar(matriz1);
    printf("Matriz ordenada:\n");
    for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        printf("%d ", matriz1[i][j]);
    }
    printf("\n");

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    if(!busca_binaria(matriz1, valor)){
    printf("Elemento %d nao encontrado na matriz.\n", valor);
}
}}
