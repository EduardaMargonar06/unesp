
#include <stdio.h>

int somando(int N){
    int i=0;
    
    if(N==0){
     return 0;   
    } else {
        return N + somando(N-1);
    }  
    
}

int main()
{
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    
    int soma = somando(num);
    printf("O a soma dos %d primeiros números é %d", num, soma);
}
