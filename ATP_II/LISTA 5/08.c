#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a; 
    } else {
        return mdc(b, a % b); 
    }
}


int main()
{
    int x, y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    
    printf("O MDC de %d e %d é %d\n", x, y, mdc(x, y));
}

    
