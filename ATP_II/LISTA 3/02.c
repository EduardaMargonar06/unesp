#include <stdio.h>
#include <string.h> 

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} carro;

int main(){
    carro carro1;
    
    printf("Digite a marca: ");
    fgets(carro1.marca, 50, stdin);
    carro1.marca[strcspn(carro1.marca, "\n")] = 0;
    
    printf("Digite o modelo: ");
    fgets(carro1.modelo, 50, stdin);
    carro1.marca[strcspn(carro1.modelo, "\n")] = 0;
    
    printf("Digite o ano: ");
    scanf("%d", &carro1.ano);
    
    printf("\n--- Dados do Carro ---\n");;
    printf("Marca: %s\n", carro1.marca);
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    
}
