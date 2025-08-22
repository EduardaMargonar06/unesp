#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /*para usar o true e o false*/
#include <limits.h>
#include <time.h> /*para usar o srand(time(NULL)); */


bool Verifica_primo(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int gerar_primo(){
    int num;
    do {
        num = rand() % 100;
    } while (!Verifica_primo(num)); 
    return num;
}

void preencher_primos(int M[5][5]){
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            M[i][j]=gerar_primo();
        }
    }
    
}

int main(){
    int matriz[5][5];
    
    srand(time(NULL)); /* inicializa com numeros novos*/
    
    preencher_primos(matriz);
    
    printf("Matriz preenchida com primos: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    
}
