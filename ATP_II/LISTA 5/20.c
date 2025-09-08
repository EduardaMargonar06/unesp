#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int raiz(int n, int baixo, int alto){
    if(baixo > alto) return alto;
    int meio = (baixo+alto)/2;
    if(meio*meio == n) return meio;
    if(meio*meio > n) return raiz(n, baixo, meio-1);
    return raiz(n, meio+1, alto);
}

int main(){
    int n=20;
    printf("%d\n", raiz(n,0,n));
    return 0;
}
