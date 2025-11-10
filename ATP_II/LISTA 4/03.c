#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char caractere;
    int contador_linhas = 0;
    
    arq = fopen("minha_mensagem.txt", "r");

    if (arq == NULL) {
        printf("ERRO: Não foi possível abrir o arquivo. Verifique se ele existe.\n");
        exit(1);
    }
    
    while ((caractere = fgetc(arq)) != EOF) {
        if (caractere == '\n') {
            contador_linhas++;
        }
    }

    fclose(arq);
    
   if (contador_linhas > 0 || ferror(arq) == 0) {
        contador_linhas++; 
    }

    printf("--- Contagem de Linhas ---\n");
    printf("O arquivo possui %d linhas.\n", contador_linhas);

    return 0;
}
