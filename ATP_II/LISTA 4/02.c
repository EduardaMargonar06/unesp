#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char caractere;

    printf("--- Leitura ---\n");
    
    arq = fopen("minha_mensagem.txt", "r");

    if (arq == NULL) {
        printf("ERRO: Não foi possível abrir o arquivo 'minha_mensagem.txt'. Verifique se ele existe.\n");
        exit(1);
    }

   printf("Conteúdo:\n");
    
    while ((caractere = fgetc(arq)) != EOF) {
        printf("%c", caractere);
    }
    
    printf("\n------------------------------------\n");

    fclose(arq);

    printf("Leitura do arquivo concluída com sucesso.\n");

    return 0;
}
