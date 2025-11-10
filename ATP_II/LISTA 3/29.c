#include <stdio.h>
#include <string.h>

typedef struct {
    char nome_rua[50];
    int num;
} endereco;

typedef struct {
    char nome[50];
    int idade;
    endereco local;
} cliente;

int main()
{
    cliente c1;
    cliente *ponteiro_c1;
    
    
    ponteiro_c1 = &c1;
    strcpy(ponteiro_c1->nome, "juninho");
    strcpy(ponteiro_c1->local.nome_rua, "rua rbervaldo da costa");
    
    ponteiro_c1->idade = 19;
    
    ponteiro_c1->local.num = 778; 
    
    printf("Info do cliente:\n");
    printf("NOME: %s\n", c1.nome);
    printf("IDADE: %d\n", c1.idade);
    printf("RUA: %s\n", c1.local.nome_rua);
    printf("NUMERO: %d\n", c1.local.num);

    return 0;
}
