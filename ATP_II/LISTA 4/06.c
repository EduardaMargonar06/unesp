#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome_arquivo[100];
    char caractere_busca;
    char c;
    int contador_ocorrencias = 0;
    int numero_linha = 1;
    int linha_encontrada = 0;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arquivo);

    while (getchar() != '\n'); 

    printf("Digite o caractere que deseja buscar: ");
    scanf("%c", &caractere_busca);

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    
    while ((c = fgetc(arquivo)) != EOF) {
        
        if (c == caractere_busca) {
            contador_ocorrencias++;
            
            if (linha_encontrada == 0) {
                printf("Encontrado na Linha %d: ", numero_linha);
                linha_encontrada = 1; 
            }
            putchar(c);
        }
        
        if (c == '\n') {
            if (linha_encontrada == 1) {
                printf("\n"); 
            }
            numero_linha++;
            linha_encontrada = 0; 
        }
    }
    
    fclose(arquivo);

    if (linha_encontrada == 1) {
        printf("\n");
    }

    printf("Total de '%c': %d\n", caractere_busca, contador_ocorrencias);

}
