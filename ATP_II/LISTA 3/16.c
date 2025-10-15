#include <stdio.h>
#include <string.h>

struct filme{
    char titulo[100];
    char diretor[80];
    int ano;
};



int main(){
    struct filme filme1;
    
    printf("Digite o nome do filme: ");
    fgets(filme1.titulo, 100, stdin);
    filme1.titulo[strcspn(filme1.titulo, "\n")] = 0;
    
    printf("Digite o diretor: ");
    fgets(filme1.diretor, 80, stdin);
    filme1.diretor[strcspn(filme1.diretor, "\n")] = 0;
    
   
    
    printf("Digite o ano de lançamento: ");
    scanf("%d", &filme1.ano);
    
    printf("\n-- Info dos filmes --\n");
    printf("Nome: %s\n", filme1.titulo);
    printf("Diretor: %s\n", filme1.diretor);
    printf("Ano de lançamento: %d\n", filme1.ano);
}
