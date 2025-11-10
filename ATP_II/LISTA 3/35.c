#include <stdio.h>

typedef enum {
    PRIMAVERA =1, 
    VERAO,     
    OUTONO,    
    INVERNO    
} Estacao;

int main() {
    printf("--- Estações do Ano ---\n");
    
    printf("PRIMAVERA: %d\n", PRIMAVERA);
    printf("VERAO:     %d\n", VERAO);
    printf("OUTONO:    %d\n", OUTONO);
    printf("INVERNO:   %d\n", INVERNO);
        
    return 0;
}
