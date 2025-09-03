#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verif_pali(char palavra[], int inicio, int fim){
    if(inicio>=fim) return true;
    if (palavra[inicio] != palavra[fim]) return false;
    
    return verif_pali(palavra, inicio+1, fim -1);
}



int main()
{
    char palavra[100];
    
    printf("Digite a palavra: ");
    scanf("%s", palavra);
    
    int tamanho = strlen(palavra);
    if(verif_pali(palavra, 0, tamanho-1)){
       printf("é palindromo"); 
    } 
    else {printf("não é palindromo");}
}
