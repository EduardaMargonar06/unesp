#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[100];
    int numero;
    char cidade[50];
    char estado[3];
    char cep[10];
};

int main(){
    struct endereco enderecoAntigo, enderecoNovo;
    
    strcpy(enderecoAntigo.rua, "Avenida Washington Luiz");
    enderecoAntigo.numero = 2267;
    strcpy(enderecoAntigo.cidade, "Presidente Prudente");
    strcpy(enderecoAntigo.estado, "SP");
    strcpy(enderecoAntigo.cep, "19060-000");
    
    enderecoNovo = enderecoAntigo;
    
    printf("--- Nova Struct ---\n");
    printf("Rua: %s\n", enderecoNovo.rua);
    printf("Número: %d\n", enderecoNovo.numero);
    printf("Cidade: %s\n", enderecoNovo.cidade);
    printf("Estado: %s\n", enderecoNovo.estado);
    printf("CEP: %s\n", enderecoNovo.cep);
}
