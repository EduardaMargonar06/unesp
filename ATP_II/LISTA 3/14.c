#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[70];
} cliente;

int main(){
    cliente cliente1;
    
    strcpy(cliente1.nome, "Fulan da Silva");
    strcpy(cliente1.endereco, "Rua das Flores, 456 - Bairro Central, Cidade X");

    cliente1.idade = 35;

    printf("--- Informações do Cliente ---\n");
    printf("Nome: %s\n", cliente1.nome);
    printf("Idade: %d anos\n", cliente1.idade);
    printf("Endereço: %s\n", cliente1.endereco);
    
    return 0;
}
