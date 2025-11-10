#include <stdio.h>
#include <stdlib.h> 

int main(){
    FILE *arq;
    
    arq =fopen("minha_mensagem.txt", "w");
    
    if (arq == NULL) {
        printf("Erro ao abrir ou criar o arquivo!\n");
       exit(1); 
    }
    
    fprintf(arq, "Esta é a mensagem que foi escrita no arquivo de texto.\n");

    fclose(arq); 

    printf("Arquivo 'minha_mensagem.txt' criado e mensagem escrita com sucesso.\n");
    
}
