#include <stdio.h>
#include <limits.h>


int fibonacci(int N){
    
    if(N == 0) return 0;
    if(N == 1) return 1;
    return fibonacci(N-1) + fibonacci(N-2);
}


int main()
{
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
      printf("Sequência de Fibonacci até o %dº termo: ", num);
    for(int i = 0; i < num; i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n");
        
    }

    
