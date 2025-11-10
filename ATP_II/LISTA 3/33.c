#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float salario;
    char depatarmento[20];
} funcionario;


int main(){
  size_t tamanho_struct = sizeof(funcionario);
    
   printf("Tamanho total da struct 'Funcionario': %zu bytes\n", tamanho_struct);  
    
}
