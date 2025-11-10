#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    char departamento[20];
} funcionario;

void imprimirfuncionarios ( funcionario f){
    printf("--- Dados Fun ---\n");
    printf("Nome: %s\n", f.nome);
    printf("Salário: R$ %.2f\n", f.salario);
    printf("Departamento: %s\n", f.departamento);
}

int main(){
    funcionario fun1;
    
    strcpy(fun1.nome, "Helena Souza");
    fun1.salario = 5500.50;
    strcpy(fun1.departamento, "Marketing");
    imprimirfuncionarios(fun1);
    
    
    
    
    
}






