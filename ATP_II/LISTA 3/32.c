#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int cod;
    float preco;
} produtos;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main(){
    produtos p[4];
    for(int i=0;i<4;i++){
        printf("Digite o nome do %dº produto: ", i+1);
        fgets(p[i].nome, 50, stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] =0;
        
       printf("Digite o codigo do %dº produto: ", i+1);
       scanf("%d", &p[i].cod);
        limpar_buffer();
        
        printf("Digite o preco do %dº produto: ", i+1);
        scanf("%f", &p[i].preco);
       limpar_buffer();
        
        printf("\n\n");
    }
    
     for(int i=0; i<4; i++){
        printf("\n--- %dº Produto ---\n", i+1);
        printf("Nome:   %s\n", p[i].nome);
        printf("Codigo: %d\n", p[i].cod);
        printf("Preco:  %.2f\n", p[i].preco);
    }
    
}
