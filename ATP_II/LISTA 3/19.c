#include <stdio.h>
#include <string.h>

typedef struct{
    char marca[30];
    char modelo[30];
    int ano;
} carro;

void imprimircorro(const carro* c){
    // Usa '->' para acessar dados através de um ponteiro
    printf("\n-- Info do carro --");
    printf("\nMarca: %s\n", c->marca);
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
}

int main()
{
    carro meucarro;
    
    printf("Digite a marca: ");
    fgets(meucarro.marca, 30, stdin);
    meucarro.marca[strcspn(meucarro.marca, "\n")] = '\0';
    
    printf("Digite o modelo: ");
    fgets(meucarro.modelo, 30, stdin);
    meucarro.modelo[strcspn(meucarro.modelo, "\n")] = '\0';
    
    printf("Digite o ano: ");
    scanf("%d", &meucarro.ano);
    
    imprimircorro(&meucarro);
    
}
