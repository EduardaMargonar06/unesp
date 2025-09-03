#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

bool veri_primos(int N, int divi) {
    if(N<2) return false;
    if(divi == 1) return true;
    if(N % divi == 0) return false;
    return veri_primos(N, divi -1);
}

void mostrar_primos(int atual, int N){
    if(atual>N) return;
    if (veri_primos(atual, atual - 1)) {
        printf("%d ", atual);
    }

    mostrar_primos(atual + 1, N);
}

int main() {
    int num;
    printf("Digite: ");
    scanf("%d", &num); 
    
    printf("Números primos até %d:\n", num);
    mostrar_primos(2, num);
    return 0;
}
