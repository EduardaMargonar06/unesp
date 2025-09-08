#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int C(int n, int k){
    if(k==0 || k==n) return 1;
    return C(n-1,k-1) + C(n-1,k);
}

int main(){
    printf("%d\n", C(5,2));
    return 0;
}
