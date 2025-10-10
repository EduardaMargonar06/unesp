#include <stdio.h>
#include <string.h> 

union numero{
    int num_int;
    float num_float;
};//tbm tem q ter o ;


int main() {
    union numero meu_num;
    meu_num.num_int = 2025;
    printf("Valor armazenado como inteiro: %d\n\n", meu_num.num_int);

    meu_num.num_float = 123.45;
    
    printf("Valor armazenado como flutuante: %.2f\n", meu_num.num_float);

    
    printf("Tentando acessar o inteiro novamente: %d\n", meu_num.num_int);//não funciona

    return 0;
}
