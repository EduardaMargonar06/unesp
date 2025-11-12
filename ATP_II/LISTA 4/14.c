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
    int id_busca;
    Aluno registro;
    size_t tamanho_registro = sizeof(Aluno);
    long total_registros, inicio, fim, meio;
    
    printf("Digite o ID do Aluno a ser buscado: ");
    scanf("%d", &id_busca);

    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fseek(arquivo, 0L, SEEK_END);
    total_registros = ftell(arquivo) / tamanho_registro;
    
    if (total_registros == 0) {
        printf("vazio.\n");
        fclose(arquivo);
        return 0;
    }
    
    inicio = 0;
    fim = total_registros - 1;

    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;
        
        fseek(arquivo, meio * tamanho_registro, SEEK_SET);
        if (fread(&registro, tamanho_registro, 1, arquivo) != 1) {
            perror("Err");
            fclose(arquivo);
            return 1;
        }

        if (registro.id == id_busca) {
            
            printf("ID: %d\n", registro.id);
            printf("Nome: %s\n", registro.nome);
            printf("Nota: %.2f\n", registro.nota);
            fclose(arquivo);
            return 0;
        } else if (registro.id < id_busca) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    fclose(arquivo);
    printf("n encontrado no arquivo.\n");

    return 0;
}
