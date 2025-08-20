#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h> /*manipulação de strings*/

int main(){
  char string[20];
  bool palindromo = true; /* qnd for usar true e false tem q ser bool*/
  /* NAO ESQUECE O #include <stdbool.h>*/

  printf("Digite: ");
  fgets(string, sizeof(string), stdin);

  string[strcspn(string, "\n")] = '\0'; /*isso apaga o \n do final*/
  int tamanho = strlen(string);

  for(int i=0;i<(tamanho-1)/2;i++){
      if(string[i]!=string[tamanho-1-i]){
          palindromo= false;
          break;
      }
  }

  if(palindromo){ /*n é obrigatorio usar if(palindromo==true), so desse jeito o negocio ja entende*/
 printf("é palíndromo");
  } else{
 printf("nao e palindromo");
  }
}
