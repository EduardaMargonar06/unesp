#include <stdio.h>

int main(){
    float num, media= 0.0;

    for(int i=0;i<6;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%f",&num);
        media += num;
    }

    printf("A media é: %.2f", media/6.0);



}
