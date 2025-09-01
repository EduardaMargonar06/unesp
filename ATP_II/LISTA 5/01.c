
#include <stdio.h>

int fatorial(int N){
    if (N==0){
        return 1;
    }
    else{
        return N*fatorial(N-1);
    }
}

int main()
{
    int num;
    printf("Digite o número que vc quer saber o fatorial: ");
    scanf("%d", &num);
    
    int fat = fatorial(num);
    printf("O fatorial de %d é %d", num, fat);
}
