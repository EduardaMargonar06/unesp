#include <stdio.h>

typedef union {
    double valor_real;
    char caractere;
} DadoCompartilhado;

int main() {
    DadoCompartilhado dado;

    printf("Tamanho da União: %zu bytes (Tamanho do double)\n\n", sizeof(dado));

    printf("A. Armazenando o valor DOUBLE (3.14159):\n");
    dado.valor_real = 3.14159;
    
    printf("  -> Valor de 'valor_real': %.5f\n", dado.valor_real);
    
    printf("  -> Valor de 'caractere' (Leitura Incorreta): %c\n\n", dado.caractere);
    
    printf("B. Armazenando o valor CHAR ('W'):\n");
    dado.caractere = 'W'; 
    printf("  -> Valor de 'caractere': %c\n", dado.caractere);
    
    printf("  -> Valor de 'valor_real' (Valor Corrompido/Lixo): %f\n", dado.valor_real);

    return 0;
}
