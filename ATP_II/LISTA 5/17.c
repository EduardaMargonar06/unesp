#include <stdio.h>

int caminhos(int n, int m){
    if(n==1 || m==1) return 1;
    return caminhos(n-1,m) + caminhos(n,m-1);
}

int main(){
    int N = 3;
    printf("%d\n", caminhos(N,N));
    return 0;
}
