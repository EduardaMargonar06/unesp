#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int tamanho = strlen(argv[1]);
    printf("A string \"%s\" tem %d caracteres.\n", argv[1], tamanho);
}
