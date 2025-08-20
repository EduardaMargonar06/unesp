#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h>

int main(){
    char texto[150];
    int carac=0, palavra=0, linha=0;

    printf("digite: ");
    fgets(texto, sizeof(texto), stdin);

    carac= strlen(texto);

    for(int i=0;i<carac;i++){
        if(texto[i]== ' '){
            palavra++;
        }
        if(texto[i] == '\n'){
            linha++;
        }
    }

    if (carac > 0 && texto[0] != '\n') {
        palavra++;
    }

    printf("Número de caracteres: %d\n", carac - 1); // -1 para excluir '\n' do final
    printf("Número de palavras: %d\n", palavra);
    printf("Número de linhas: %d\n", linha);
}
