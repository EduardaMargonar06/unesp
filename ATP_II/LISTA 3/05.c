#include <stdio.h>
#include <string.h> 

//impressão usando ponteiros (->)

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} aluno;

int main(){
   aluno aluno1;
   aluno *ponteiro_aluno;
   
   ponteiro_aluno = &aluno1;
   
   strcpy(ponteiro_aluno->nome, "Alice");
   ponteiro_aluno->matricula = 20241503;
   ponteiro_aluno->nota = 8.4;
    
    printf("--- Dados do Aluno ---\n");
    printf("Nome:      %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota:      %.1f\n", aluno1.nota);
}
