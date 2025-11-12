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
    int num_registro;
    Aluno registro;
    size_t tamanho_registro = sizeof(Aluno);
    long deslocamento;
    long total_registros;

    printf("Numero do registro (comecando em 1): ");
    scanf("%d", &num_registro);

    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fseek(arquivo, 0L, SEEK_END);
    total_registros = ftell(arquivo) / tamanho_registro;
    fseek(arquivo, 0L, SEEK_SET);

    if (num_registro < 1 || num_registro > total_registros) {
        printf("ERRO: Registro %d fora do intervalo (1 a %ld).\n", num_registro, total_registros);
        fclose(arquivo);
        return 1;
    }

    deslocamento = (long)(num_registro - 1) * tamanho_registro;
    
    fseek(arquivo, deslocamento, SEEK_SET);
    
    if (fread(&registro, tamanho_registro, 1, arquivo) != 1) {
        perror("Erro ao ler o registro");
        fclose(arquivo);
        return 1;
    }
    
    fclose(arquivo);

    printf("\n--- Registro %d ---\n", num_registro);
    printf("ID: %d\n", registro.id);
    printf("Nome: %s\n", registro.nome);
    printf("Nota: %.2f\n", registro.nota);

    return 0;
}
