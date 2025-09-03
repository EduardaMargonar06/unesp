#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int pot(int B, int E){
     if(E == 0){
         return 1;
     }else{
         return B*pot(B,E-1);
     }
   
}


int main()
{
    int base, expo;
    printf("Digite a base ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expo);
    
    int potencia = pot(base, expo);
    printf("A potencia de %d com o %d como seu expoente é %d", base, expo, potencia);
    
}

    
