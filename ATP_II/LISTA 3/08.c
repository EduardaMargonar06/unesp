#include <stdio.h>
#include <string.h> 

typedef struct{
    char nome[50];
    int codigo;
    float preco;
} mercado;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    mercado produtos[5];
    
    for(int i=0; i<5; i++){
        printf("Digite o %dº nome: ", i+1);
        fgets(produtos[i].nome,50, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] =0;
        
        printf("Digite o codigo: ");
        scanf("%d", &produtos[i].codigo);
        limpar_buffer();
         
        printf("Digite o preco: ");
        scanf("%f", &produtos[i].preco);
        limpar_buffer();
        
        printf("\n\n");
    }
    
     for(int i=0; i<5; i++){
        printf("\n--- %dº Produto ---\n", i+1);
        printf("Nome:   %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Preco:  %.2f\n", produtos[i].preco);
    }
}
