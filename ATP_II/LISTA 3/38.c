#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char telefone[15];
    char email[100];
} Contato;

int main() {
    Contato contato1;

    strcpy(contato1.nome, "Lucas Fernandes");
    strcpy(contato1.telefone, "55-99876-5432");
    strcpy(contato1.email, "lucas.f@email.com");
    
    printf("--- Informações de Contato ---\n");
    printf("Nome: %s\n", contato1.nome);
    printf("Telefone: %s\n", contato1.telefone);
    printf("Email: %s\n", contato1.email);
    
    return 0;
}
