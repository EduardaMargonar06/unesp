#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 1000

void substituir_palavra(const char *nome_arq, const char *antiga, const char *nova) {
    FILE *arq_orig, *arq_temp;
    char linha[MAX_LINHA];
    char *ocorrencia;
    const char *nome_temp = "temp.txt";

    arq_orig = fopen(nome_arq, "r");
    if (arq_orig == NULL) {
        perror("Erro ao abrir");
        return;
    }

    arq_temp = fopen(nome_temp, "w");
    if (arq_temp == NULL) {
        perror("Erro ao criar o arquivo temporário");
        fclose(arq_orig);
        return;
    }

    while (fgets(linha, MAX_LINHA, arq_orig) != NULL) {
        char *ptr_linha = linha;
        
        while ((ocorrencia = strstr(ptr_linha, antiga)) != NULL) {
            fwrite(ptr_linha, 1, ocorrencia - ptr_linha, arq_temp);
            fprintf(arq_temp, "%s", nova);
            ptr_linha = ocorrencia + strlen(antiga);
        }
        
        fprintf(arq_temp, "%s", ptr_linha);
    }

    fclose(arq_orig);
    fclose(arq_temp);

    if (remove(nome_arq) != 0) {
        perror("Erro ao deletar");
        return;
    }
    
    if (rename(nome_temp, nome_arq) != 0) {
        perror("Erro ao renomear o arquivo temporário");
        return;
    }

    printf("Substituição concluída: '%s' por '%s' em %s.\n", antiga, nova, nome_arq);
}

int main() {
    char nome_arquivo[100], palavra_antiga[100], palavra_nova[100];

    printf("=== SUBSTITUIÇÃO DE PALAVRAS ===\n");
    printf("Nome do arquivo: ");
    scanf("%s", nome_arquivo);
    
    printf("Palavra antiga: ");
    scanf("%s", palavra_antiga);
    
    printf("Nova palavra: ");
    scanf("%s", palavra_nova);
    
    substituir_palavra(nome_arquivo, palavra_antiga, palavra_nova);

    return 0;
}
