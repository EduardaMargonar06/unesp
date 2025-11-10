#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo_origem;
    FILE *arquivo_destino;
    char caractere;
    
    const char *nome_origem = "minha_mensagem.txt";
    const char *nome_destino = "copia_mensagem.txt";

    arquivo_origem = fopen(nome_origem, "r");
    if (arquivo_origem == NULL) {
        printf("ERRO: Nao foi possivel abrir o arquivo de origem '%s'.\n", nome_origem);
        exit(1);
    }

    arquivo_destino = fopen(nome_destino, "w");
    if (arquivo_destino == NULL) {
        printf("ERRO: Nao foi possivel criar o arquivo de destino '%s'.\n", nome_destino);
        fclose(arquivo_origem);
        exit(1);
    }
    
    printf("Copiando de '%s' para '%s'...\n", nome_origem, nome_destino);

    while ((caractere = fgetc(arquivo_origem)) != EOF) {
        fputc(caractere, arquivo_destino);
    }

    fclose(arquivo_origem);
    fclose(arquivo_destino);

    printf("Copia concluida com sucesso.\n");

    return 0;
}
