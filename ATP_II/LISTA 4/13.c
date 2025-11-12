#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

int comparar_alunos(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return alunoA->id - alunoB->id;
}

int main() {
    FILE *arquivo;
    const char *nome_arquivo = "registros.bin";
    size_t tamanho_registro = sizeof(Aluno);
    long total_bytes;
    long num_registros;
    Aluno *registros;

    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro");
        return 1;
    }
    
    fseek(arquivo, 0L, SEEK_END);
    total_bytes = ftell(arquivo);
    num_registros = total_bytes / tamanho_registro;
    fseek(arquivo, 0L, SEEK_SET);

    if (num_registros == 0) {
        printf("vazio.\n");
        fclose(arquivo);
        return 0;
    }

    registros = (Aluno *)malloc(total_bytes);
    if (registros == NULL) {
        perror("Erro");
        fclose(arquivo);
        return 1;
    }

    if (fread(registros, tamanho_registro, num_registros, arquivo) != num_registros) {
        perror("Erro");
        free(registros);
        fclose(arquivo);
        return 1;
    }
    fclose(arquivo); 
    
    qsort(registros, num_registros, tamanho_registro, comparar_alunos);
    
    arquivo = fopen(nome_arquivo, "wb");
    if (arquivo == NULL) {
        perror("Erro");
        free(registros);
        return 1;
    }

    if (fwrite(registros, tamanho_registro, num_registros, arquivo) != num_registros) {
        perror("Erro");
        fclose(arquivo);
        free(registros);
        return 1;
    }

    fclose(arquivo);
    free(registros);

    printf("Sucesso!");

    return 0;
}
