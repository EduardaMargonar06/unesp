
#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[30];
    char autor[30];
    int ano;
} livro;

void imprimirlivros(const livro* L){
    printf("TITULO: %s\n", L->titulo);
    printf("AUTOR: %s\n", L->autor);
    printf("ANO: %d\n", L->ano);
}

void imprimirestante(const livro estante[]){
    printf("--- estante ---\n\n");
    
    for (int i=0; i< 3; i++){
        printf("\n%dº livro:\n", i+1);
        imprimirlivros(&estante[i]);
    }
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    livro meulivro[3];
    
    for(int i=0; i<3; i++){
        printf("Digite a o titulo do %dº livro: ", i+1);
        fgets(meulivro[i].titulo, 30, stdin);
        meulivro[i].titulo[strcspn(meulivro[i].titulo, "\n")] = '\0';
        
        printf("Digite a o autor do %dº livro: ", i+1);
        fgets(meulivro[i].autor, 30, stdin);
        meulivro[i].autor[strcspn(meulivro[i].autor, "\n")] = '\0';
        
        printf("Digite a o ano do %dº livro: ", i+1);
        scanf("%d", &meulivro[i].ano);
         limpar_buffer();
        printf("\n");
    }
    
    imprimirestante(meulivro);
}
