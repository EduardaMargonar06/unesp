#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

int main() {
    FILE *arquivo;
    const char *nome_arquivo = "registros.bin";
    Aluno novo_registro;
    size_t tamanho_registro = sizeof(Aluno);

    printf("--- ADICIONAR REGISTRO ---\n");
    printf("ID do Aluno: ");
    scanf("%d", &novo_registro.id);
    
    printf("Nome do Aluno: ");
    while (getchar() != '\n'); 
    if (fgets(novo_registro.nome, 50, stdin) != NULL) {
        novo_registro.nome[strcspn(novo_registro.nome, "\n")] = 0;
    }
    
    printf("Nota do Aluno: ");
    scanf("%f", &novo_registro.nota);

    arquivo = fopen(nome_arquivo, "ab");
    if (arquivo == NULL) {
        perror("Erro ao abrir/criar");
        return 1;
    }
    
    if (fwrite(&novo_registro, tamanho_registro, 1, arquivo) != 1) {
        perror("Erro");
        fclose(arquivo);
        return 1;
    }
    
    fclose(arquivo);

    printf("\nSucesso!");

    return 0;
}
