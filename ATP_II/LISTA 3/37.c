#include <stdio.h>
#include <string.h>

typedef struct{
    char nome_rua[50];
    int num;
} endereco;

typedef struct {
    char nome[100];
    endereco local;
    int idade;
} cliente;


int main() {
    cliente c1;
    
    strcpy(c1.nome, "Fernando Torres");
    c1.idade = 45;
    
    strcpy(c1.local.nome_rua, "Rua das Acacias");
    c1.local.num = 1250;
    
    printf("--- Dados do Cliente ---\n");
    printf("Nome: %s\n", c1.nome);
    printf("Idade: %d anos\n", c1.idade);
    printf("Endereco: %s, %d\n", c1.local.nome_rua, c1.local.num);

    return 0;
}
