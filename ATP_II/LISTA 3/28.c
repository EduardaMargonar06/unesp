#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[100];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    int idade;
    Endereco local;
} Cliente;

int main() {
   Cliente c1;

    strcpy(c1.nome, "Ana Torres");
    c1.idade = 28;

    strcpy(c1.local.rua, "Rua das Oliveiras");
    c1.local.numero = 105; 

    printf("--- Dados do Cliente ---\n");
    
    printf("Nome: %s\n", c1.nome);
    printf("Idade: %d anos\n", c1.idade);
    
    
    return 0;
}
