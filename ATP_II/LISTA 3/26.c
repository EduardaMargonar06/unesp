#include <stdio.h>
#include <string.h> 

typedef struct {
    char nome[50];
    char disciplina[50];
    float salario;
} Professor; 

int main()
{
   Professor prof_novo = {
        .salario = 65000.75,
        .nome = "Dr. António Costa",
        .disciplina = "Programação Avançada"
    };

    printf("--- Informações do Professor ---\n");
    printf("Nome: %s\n", prof_novo.nome);
    printf("Disciplina: %s\n", prof_novo.disciplina);
    printf("Salário Anual: € %.2f\n", prof_novo.salario);
    printf("--------------------------------\n");

    return 0;
}
