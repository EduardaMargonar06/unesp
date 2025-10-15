#include <stdio.h>
#include <string.h>

struct filme{
    char titulo[100];
    char diretor[80];
    int ano;
};



int main(){
    struct filme filme1;
    struct filme *ponteiro_filme;
    
    ponteiro_filme = &filme1;
    
    strcpy(ponteiro_filme->titulo, "Culpa é das estrelas");
    strcpy(ponteiro_filme->diretor, "Fulanp da costa");
    ponteiro_filme->ano = 2017;
    
    printf("\n-- Info dos filmes --\n");
    printf("Nome: %s\n", filme1.titulo);
    printf("Diretor: %s\n", filme1.diretor);
    printf("Ano de lançamento: %d\n", filme1.ano);
}
