#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome_arquivo[100];
    int byte_lido; 
    int contador = 0; 

    printf("Digite o nome do arquivo binário: ");
    scanf("%s", nome_arquivo);

    arquivo = fopen(nome_arquivo, "rb");
    
    if (arquivo == NULL) {
        perror("Erro ao tentar abrir o arquivo");
        return 1;
    }

    printf("\n--- Conteúdo Binário ---\n");
    
    while ((byte_lido = fgetc(arquivo)) != EOF) {
        
        printf("%02X ", byte_lido);
        
        contador++;
        
        if (contador % 16 == 0) {
            printf("\n");
        }
    }
    
    fclose(arquivo);

    printf("\n\n concluído \n");

    return 0;
}
