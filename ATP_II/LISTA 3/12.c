#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

typedef struct{
   int matricula;
    char nome[50];
    int idade;
    data nascimento;
} alunos;

int main()
{
   alunos AlunoNovo;
   
   AlunoNovo.matricula = 123456;
   strcpy(AlunoNovo.nome, "Fulano da Silva");
   AlunoNovo.idade = 19;
   
   AlunoNovo.nascimento.dia = 21;
   AlunoNovo.nascimento.mes = 05;
   AlunoNovo.nascimento.ano = 2006;
   
   printf("-- Informações do novo aluno --\n\n");
   printf("Matricula: %d\n", AlunoNovo.matricula);
   printf("Nome: %s\n", AlunoNovo.nome);
   printf("idade: %d\n", AlunoNovo.idade);
   printf("Data de nascimento: %d/%d/%d",
           AlunoNovo.nascimento.dia,
           AlunoNovo.nascimento.mes,
           AlunoNovo.nascimento.ano);
}
