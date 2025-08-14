#include <stdio.h>

int main(){

    int cont=0;
    char carac;

    for(int i=0;i<8;i++){
        printf("Digite o %d caractere: ", i+1);
        scanf("%c", &carac);

        if(carac== 'a' || carac== 'e' || carac== 'i' || carac== 'o' || carac== 'u' ){
            cont++;
        }
    }

    printf("A quantidade de vogais: %d", cont);



}
