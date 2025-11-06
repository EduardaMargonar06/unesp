#include <stdio.h>
#include <string.h> 

struct Funcionario {
    int id;
    char nome[50];
    float salario;
    int idade;
};

void imprimirFuncionario(struct Funcionario f) {
    printf("\n--- Detalhes do Funcionário ---\n");
    printf("ID: %d\n", f.id);
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d anos\n", f.idade);
    printf("Salário: R$ %.2f\n", f.salario);
    printf("-------------------------------\n");
}

int main()
{
    struct Funcionario func1;

    func1.id = 101;
    func1.idade = 35;
    func1.salario = 4500.50;

    strcpy(func1.nome, "João Silva");

    printf("Cadastro do Funcionário 1 .\n");
    imprimirFuncionario(func1);

    struct Funcionario func2 = {
        .id = 102,
        .idade = 28,
        .salario = 3200.00,
        .nome = "Maria Oliveira"
    };

    printf("\nCadastro do Funcionário 2\n");
    imprimirFuncionario(func2);

    return 0;
}
