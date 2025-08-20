#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h> /*manipulação de strings*/

void subs_carac(char *str, char antigo, char novo) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}


int main(){
  char string[20];
  char carac, subs;

  printf("Digite: ");
  fgets(string, sizeof(string), stdin);

  printf("Digite o caractere que voce quer que seja substituido: ");
  scanf(" %c", &carac);

  printf("Digite o caractere que vai substituir: ");
  scanf(" %c", &subs);

 subs_carac(string, carac, subs);

   printf("A sua string ficou: %s", string);

}
