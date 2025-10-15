#include <stdio.h>
#include <string.h> 

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
} // só esse jeito que esse funcionou
typedef struct {
    int dia;
    int mes;
    int ano;
} data;

typedef struct {
    char nome[50];
    int idade;
    data data_nascimento;
} pessoa;

int main(){
    pessoa pessoa1;
    
    printf("Digite o nome: ");
    fgets(pessoa1.nome, 50, stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = 0;
   
   printf("Digite a idade: ");
   scanf("%d", &pessoa1.idade);
   
     // isso é para limpar o buffer
    while (getchar() != '\n'); 
    
    printf("Digite o dia: ");
    scanf("%d", &pessoa1.data_nascimento.dia);
   
    printf("Digite o mes: ");
    scanf("%d", &pessoa1.data_nascimento.mes);
    
     printf("Digite o ano: ");
    scanf("%d", &pessoa1.data_nascimento.ano);
    
    printf("--- Dados da Pessoa ---\n");
    printf("Nome:            %s\n", pessoa1.nome);
    printf("Idade:           %d\n", pessoa1.idade);
    printf("Nascimento:      %d/%d/%d", 
            pessoa1.data_nascimento.dia,
            pessoa1.data_nascimento.mes,
            pessoa1.data_nascimento.ano);
}
