#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> /* Para a função isupper()*/
#include <limits.h>
#include <stdbool.h> /* para poder usar o true e o false*/
#include <string.h> /*manipulação de strings*/

int main(){
 char pala1[50], pala2[50];

 printf("escreva a primeira palavra: ");
 fgets(pala1, sizeof(pala1), stdin);

 printf("escreva a segunda palavra para se juntar com a primeira: ");
 fgets(pala2, sizeof(pala2), stdin);

 strcat(pala1, pala2);

 printf("%s", pala1);

}
