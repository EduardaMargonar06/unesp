#include <stdio.h>
#include <string.h> 

typedef struct{
    char nome[50];
    int idade;
    float altura;
} Pessoa;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    Pessoa pessoa1;
    
    printf("Digite o nome: ");
    fgets(pessoa1.nome, 50, stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = 0;
   
    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);
    limpar_buffer();
    
    printf("Digite a altura: ");
    scanf("%f", &pessoa1.altura);
    limpar_buffer();
    
    size_t tamanho_da_estrutura = sizeof(pessoa1);
    printf("\nO tamanho da estrutura 'pessoa1' em memória é de %zu bytes.\n", tamanho_da_estrutura);
}
