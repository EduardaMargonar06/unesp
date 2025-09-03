#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void invert(char a[], int inicio, int fim) {
    if (inicio >= fim) {
        return; 
    }
    char temp = a[inicio];
    a[inicio] = a[fim];
    a[fim] = temp;

   
    invert(a, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];
    printf("Digite: ");
    scanf("%s", palavra); 
    
    int tamanho = strlen(palavra);
    invert(palavra, 0, tamanho - 1);

    printf("String invertida: %s\n", palavra);

    return 0;
}
