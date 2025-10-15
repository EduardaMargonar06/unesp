#include <stdio.h>

typedef enum{
    domingo,
    segunda, 
    terca,
    quarta, 
    quinta,
    sexta,
    sabado
} semana;

int main()
{
   printf("--- Dias da Semana ---\n"); 
   printf("DOMINGO: %d\n", domingo);
    printf("SEGUNDA: %d\n", segunda);
    printf("TERCA:   %d\n", terca);
    printf("QUARTA:  %d\n", quarta);
    printf("QUINTA:  %d\n", quinta);
    printf("SEXTA:   %d\n", sexta);
    printf("SABADO:  %d\n", sabado);
}
