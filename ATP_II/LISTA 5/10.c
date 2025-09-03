#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int soma_di(int N) {
    if(N < 10) return N;
    else return (N % 10) + soma_di(N / 10);
}

int main() {
    int num;
    printf("Digite: ");
    scanf("%d", &num); 
    
    int soma = soma_di(num);
    printf("A soma dos digitos é: %d", soma);

    return 0;
}
