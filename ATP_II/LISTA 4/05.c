#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fp1, *fp2, *fp_saida;
    char c;

    const char *nome1 = "arquivo1.txt";
    const char *nome2 = "arquivo2.txt";
    const char *nome_saida = "saida.txt";

    fp1 = fopen(nome1, "r");
    if (fp1 == NULL) {
        perror("Erro ao abrir arquivo1.txt");
        return 1;
    }

    fp2 = fopen(nome2, "r");
    if (fp2 == NULL) {
        perror("Erro ao abrir arquivo2.txt");
        fclose(fp1); 
        return 1;
    }

    fp_saida = fopen(nome_saida, "w");
    if (fp_saida == NULL) {
        perror("Erro ao criar/abrir saida.txt");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    printf("Copiando o conteúdo de %s...\n", nome1);
    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp_saida);
    }

    printf("Copiando o conteúdo de %s...\n", nome2);
    while ((c = fgetc(fp2)) != EOF) {
        fputc(c, fp_saida);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp_saida);

    printf("Foi");
}
