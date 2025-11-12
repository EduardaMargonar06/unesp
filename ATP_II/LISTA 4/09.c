#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

int main() {
    FILE *arquivo;
    const char *nome_arquivo = "registros.bin";
    long tamanho_total_arquivo;
    size_t tamanho_registro;
    long numero_registros;

    tamanho_registro = sizeof(Aluno);

    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fseek(arquivo, 0L, SEEK_END);
    tamanho_total_arquivo = ftell(arquivo);
    fseek(arquivo, 0L, SEEK_SET);

    numero_registros = tamanho_total_arquivo / tamanho_registro;
    
    fclose(arquivo);

    printf("Tamanho do registro (Aluno): %zu bytes\n", tamanho_registro);
    printf("Tamanho total do arquivo: %ld bytes\n", tamanho_total_arquivo);
    printf("\nTotal de registros calculados: %ld\n", numero_registros);

    return 0;
}
