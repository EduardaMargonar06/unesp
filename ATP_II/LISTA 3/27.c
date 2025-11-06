#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[15];
    int idade;
};

int main()
{
    struct Contato contato_original;

    strcpy(contato_original.nome, "Carlos Pereira");
    strcpy(contato_original.telefone, "55-11-98765-4321");
    contato_original.idade = 42;

    printf("--- Original  ---\n");
    printf("Nome Original: %s\n", contato_original.nome);
    printf("Telefone Original: %s\n", contato_original.telefone);
    printf("Idade Original: %d\n", contato_original.idade);
    

    struct Contato contato_copia;

    contato_copia = contato_original;

    printf("--- Cópia---\n");
    printf("Nome na Cópia: %s\n", contato_copia.nome);
    printf("Telefone na Cópia: %s\n", contato_copia.telefone);
    printf("Idade na Cópia: %d\n", contato_copia.idade);
    

    return 0;
}
