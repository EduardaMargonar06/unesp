#include <stdio.h>
#include <string.h> 


typedef struct{
    char nome[50];
    int matricula;
    int nota;
} Aluno;


void imprimir(Aluno aluno1){
    printf("\n --- Dados do Aluno ---\n");
    printf("Nome:      %s\n", aluno1.nome);
    printf("matricula: %d\n", aluno1.matricula);
    printf("Nota:      %d\n", aluno1.nota);
}

int main(){
    Aluno aluno1;
    
    printf("Digite o nome: ");
    fgets(aluno1.nome, 50, stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = 0;
    
    printf("Digite a matricula: ");
    scanf("%d", &aluno1.matricula);
    
    printf("Digite a nota: ");
    scanf("%d", &aluno1.nota);
    
    imprimir(aluno1);
    
}
