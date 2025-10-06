#include <stdio.h>
#include <string.h> 

struct info_livro{
    char titulo[100];
    char autor[50];
    int ano;
};

struct info_livro ler() {
    struct info_livro livro;
    
    printf("Digite o título: ");
    fgets(livro.titulo, 100, stdin);
    // Remove o '\n' que o fgets adiciona ao final da string
    livro.titulo[strcspn(livro.titulo, "\n")] = 0; 
    
    printf("Digite o Autor: ");
    fgets(livro.autor, 50, stdin);
    livro.autor[strcspn(livro.autor, "\n")] = 0;

    printf("Digite o Ano: ");
    scanf("%d", &livro.ano); 
    
    return livro;
}
int main()
{
   struct info_livro meu_livro;
   meu_livro = ler();
   printf("\n\n\n");
   printf("Titulo: %s\n", meu_livro.titulo);
    printf("Autor: %s\n", meu_livro.autor);
    printf("Ano: %d\n", meu_livro.ano);
}
