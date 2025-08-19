#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


int retorna_Ma(char *vetor[], int n){
    
    int indice_maior = 0;
    for(int i=0;i<4;i++){
        if (strlen(vetor[i]) > strlen(vetor[indice_maior])) {
            indice_maior = i;
        }
    }
    
    return indice_maior;
}

int main()
{
    char *strings[4];
    char  buffer[50];


    for(int i=0;i<4;i++){
        printf("Digite o %dº string: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        
        strings[i] = malloc(strlen(buffer) + 1); 
        strcpy(strings[i], buffer);

    }
    
    int indice_maior = retorna_Ma(strings, 4);
    printf("\nA string de maior comprimento é: %s\n", strings[indice_maior]);
    printf("Tamanho: %zu caracteres\n", strlen(strings[indice_maior]));
    
    for (int i = 0; i < 4; i++) {
        free(strings[i]);
    }

}

