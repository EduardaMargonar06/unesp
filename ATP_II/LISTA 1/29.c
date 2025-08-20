#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h> /*manipulação de strings*/

int main(){
  char *array_de_pont[5];
  char buffer[50]; /*temporario */

  for(int i=0;i<5;i++){
      printf("Digite o %d: ", i+1);
      fgets(buffer, sizeof(buffer), stdin);

      array_de_pont[i] = malloc(strlen(buffer));

      strcpy(array_de_pont[i], buffer);
  }

  printf("\nLista de palavras digitadas:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s;", array_de_pont[i]);
        free(array_de_pont[i]); // Libera a memória
    }
}
