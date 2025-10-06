#include <stdio.h>
#include <string.h> 

//impressão usando Ponto (.)

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} aluno;

int main(){
    aluno aluno1;
    
    strcpy(aluno1.nome, "Carlos");
    aluno1.matricula = 20230045;
    aluno1.nota = 7.9;
    
    printf("--- Dados do Aluno ---\n");
    printf("Nome:      %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota:      %.1f\n", aluno1.nota);
}
