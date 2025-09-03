#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int soma=0;
    for(int i=1; i<argc;i++){
        soma += atoi(argv[i]);
    }
    printf("A soma é %d", soma);
}
