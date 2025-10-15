#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float salario;
    char departamento[50];
} funcionarios;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
} // só esse jeito que esse funcionou

int main(){
    funcionarios novoFun;
    
    printf("Digite o nome: ");
    fgets(novoFun.nome, 50, stdin);
    novoFun.nome[strcspn(novoFun.nome, "\n")] = 0;
    

    
    printf("Digite o salario: ");
    scanf("%f", &novoFun.salario);
    
    while (getchar() != '\n');
    
    printf("Digite o departamento: ");
    fgets(novoFun.departamento, 50, stdin);
    novoFun.departamento[strcspn(novoFun.departamento, "\n")] = 0;
    
    printf("\n-- Informação do novo fun --\n");
    printf("NOME: %s\n", novoFun.nome);
    printf("SALARIO: %.2f\n", novoFun.salario);
    printf("DEPARTAMENTO: %s\n", novoFun.departamento);
}
