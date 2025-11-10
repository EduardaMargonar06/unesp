#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
} Produto;

int main() {
    Produto produto1;
    
    strcpy(produto1.nome, "Mouse");
    produto1.codigo = 45;
    produto1.preco = 79.90;

    Produto produto2;

    printf("--- Produto 1 ---\n");
    printf("Nome: %s | Código: %d | Preço: R$ %.2f\n\n", 
           produto1.nome, produto1.codigo, produto1.preco);

    produto2 = produto1; 

    produto1.preco = 1000.00;
    strcpy(produto1.nome, "outro Mouse"); 

    printf("--- copia ---\n");
    printf("Nome: %s\n", produto2.nome);
    printf("Código: %d\n", produto2.codigo);
    printf("Preço: R$ %.2f\n", produto2.preco);
    
    return 0;
}
