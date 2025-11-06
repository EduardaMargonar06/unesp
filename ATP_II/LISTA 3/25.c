#include <stdio.h>
#include <string.h> 

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main()
{
    struct Aluno aluno1 = {
        .matricula = 20241234,
        .nota = 9.5,
        .nome = "Ana Carolina"
    };

    printf("--- Informações do Aluno ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nota Final: %.2f\n", aluno1.nota);
    printf("----------------------------\n");

    return 0;
}
