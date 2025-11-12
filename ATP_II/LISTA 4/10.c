#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *origem, *destino;
    char nome_origem[100];
    char nome_destino[100];
    int byte_lido; 

    printf("Arquivo de origem: ");
    scanf("%s", nome_origem);
    printf("Arquivo de destino: ");
    scanf("%s", nome_destino);

    origem = fopen(nome_origem, "rb");
    if (origem == NULL) {
        perror("Erro");
        return 1;
    }

    destino = fopen(nome_destino, "wb");
    if (destino == NULL) {
        perror("Erro");
        fclose(origem);
        return 1;
    }

    while ((byte_lido = fgetc(origem)) != EOF) {
        if (fputc(byte_lido, destino) == EOF) {
            perror("Erro");
            fclose(origem);
            fclose(destino);
            return 1;
        }
    }
    
    fclose(origem);
    fclose(destino);

    printf("Cópia de %s para %s concluída.\n", nome_origem, nome_destino);

    return 0;
}
