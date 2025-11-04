
#include <stdio.h>
#include <string.h>

typedef struct{
    char rua[30];
    int num;
    char cidade[20];
    
} endereco;

struct pessoa{
    char nome[50];
    endereco residencia;
};

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
} // só esse jeito que esse funcionou

int main()
{
  struct pessoa p1;
  
  printf("Digite o nome da pessoa: ");
  fgets(p1.nome, 50, stdin);
  p1.nome[strcspn(p1.nome, "\n")] = '\0';
  
  printf("Digite a rua da pessoa: ");
  fgets(p1.residencia.rua, 30, stdin);
  p1.residencia.rua[strcspn(p1.residencia.rua, "\n")] = '\0';
  
   printf("Digite o número da pessoa: ");
   scanf("%d", &p1.residencia.num);
    
    limpar_buffer();
  
  printf("Digite a cidade da pessoa: ");
  fgets(p1.residencia.cidade, 20, stdin);
  p1.residencia.cidade[strcspn(p1.residencia.cidade, "\n")] = '\0';
  
  printf("\n-- Informação da pessoa --\n");
    printf("NOME: %s\n", p1.nome);
    printf("RUA: %s\n",  p1.residencia.rua);
    printf("NUM: %d\n", p1.residencia.num);
    printf("CIDADE: %s\n", p1.residencia.cidade);
}
