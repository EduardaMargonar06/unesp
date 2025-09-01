#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool primo(int N, int divisor){
    if(N<2) return false;
    if(divisor == 1) return true;
    if(N % divisor == 0) return false;
    return primo(N, divisor -1);
   
}


int main()
{
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    
    
    
    if(primo(num, num-1)){
        printf("é primo");
    }else{
        printf("não é primo");
    }
}

    
