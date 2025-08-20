#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h> /*manipulação de strings*/

int compara(const void *a, const void *b){
    /* pq eu usei desse jeito?
    void * → ponteiro genérico, porque qsort pode ordenar qualquer tipo de array.
    const → garante que você não vai alterar os elementos dentro da função de comparação. */
    const char *strA = *(const char **)a;
    const char *strB = *(const char **)b;

    return strcmp(strA, strB);
}
int main(){
  char *array_de_ponteiros[3];
  char buffer[20];

 for(int i=0;i<3;i++){
    printf("Digite a palavra %d: ", i + 1);
    fgets(buffer, sizeof(buffer), stdin);

    array_de_ponteiros[i]=malloc(strlen(buffer) + 1);

    strcpy(array_de_ponteiros[i], buffer);

 }

    qsort(array_de_ponteiros, 3, sizeof(char *), compara); /*para ver ordem alfabetica*/

  printf("\nPalavras em ordem alfabetica:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s", array_de_ponteiros[i]);
        free(array_de_ponteiros[i]);
    }

}
