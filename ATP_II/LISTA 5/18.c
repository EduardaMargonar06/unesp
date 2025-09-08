#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void hanoi(int n, char origem, char destino, char aux){
    if(n==0) return;
    hanoi(n-1, origem, aux, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n-1, aux, destino, origem);
}

int main(){
    int n=3;
    hanoi(n,'A','C','B');
    return 0;
}
