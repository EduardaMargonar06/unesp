#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
} Livro;

#define MAX_LIVROS 2

int main() {
    Livro biblioteca[MAX_LIVROS];
    int i;

    printf("--- CADASTRO DE LIVROS ---\n");
    for (i = 0; i < MAX_LIVROS; i++) {
        printf("\nCadastro do Livro %d:\n", i + 1);

        printf("Título: ");
        scanf(" %[^\n]", biblioteca[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", biblioteca[i].autor);

        printf("Ano de Publicação: ");
        scanf("%d", &biblioteca[i].ano_publicacao);
    }

    printf("\n\n--- LIVROS CADASTRADOS ---\n");
    for (i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d:\n", i + 1);
        printf("  Título: %s\n", biblioteca[i].titulo);
        printf("  Autor: %s\n", biblioteca[i].autor);
        printf("  Ano: %d\n", biblioteca[i].ano_publicacao);
    }

    return 0;
}
