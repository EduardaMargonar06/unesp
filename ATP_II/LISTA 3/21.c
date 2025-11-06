
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int codigo;
    float preco;
} produto;

int main()
{
    produto meuproduto;
    
    size_t tamanho_struct = sizeof(produto);
    size_t tamanho_variavel = sizeof(meuproduto);
    
    printf("Tamanho total da struct (em bytes): %zu\n\n", tamanho_struct);
    
    printf("Tamanho do 'nome': %zu bytes\n", sizeof(meuproduto.nome));
    printf("Tamanho do 'codigo': %zu bytes\n", sizeof(meuproduto.codigo));
    printf("Tamanho do 'preco': %zu bytes\n", sizeof(meuproduto.preco));
}
