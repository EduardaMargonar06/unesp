#include <stdio.h>
#include <string.h> 

typedef struct{
    char cor[50];
    int dia;
    char forma_geo[50];
} estrutura1;

typedef struct{
    char cor[50];
    int dia;
    char forma_geo[50];
} estrutura2;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
} // só esse jeito que esse funcionou

int main(){
    estrutura1 tab1;
    estrutura2 tab2;
    
    printf("Digite a cor: ");
    fgets(tab1.cor, 50, stdin);
    tab1.cor[strcspn(tab1.cor, "\n")] = 0;
    
    printf("Digite o dia: ");
    scanf("%d", &tab1.dia);
    
    limpar_buffer();
    
    printf("Digite o forma geometrica: ");
    fgets(tab1.forma_geo, 50, stdin);
    tab1.forma_geo[strcspn(tab1.forma_geo, "\n")] = 0;
    
    strcpy(tab2.cor, tab1.cor);
    tab2.dia = tab1.dia;
    strcpy(tab2.forma_geo, tab1.forma_geo); 
    
    
    printf("\n--- Dados ---\n");;
    printf("cor: %s\n", tab2.cor);
    printf("dia: %d\n", tab2.dia);
    printf("forma geo: %s\n", tab2.forma_geo);
}
