
#include <stdio.h>

typedef union {
    char caractere;
    int numero;
} valor; 

int main()
{
    valor dado;
    
    printf("--- Armazenando um 'char' ---\n");

    dado.caractere = 'A';

    printf("Valor 'caractere' armazenado: %c\n", dado.caractere);
    printf("Valor 'inteiro' (neste momento): %d\n", dado.numero); // aqui aparece qualquer coisa pq é o lixo

    printf("\n");

    printf("--- Armazenando um 'int' ---\n");

    dado.numero = 12345;

    printf("Valor 'inteiro' armazenado: %d\n", dado.numero);
    printf("Valor 'caractere' (neste momento): %c\n", dado.caractere);

    return 0;
}
