
#include <stdio.h>

int main()
{
   int primos[7],
       contadores,
       num =2;

    while(contadores<7){
        int divi=0;

    for(int i=1; i<= num; i++){
        if(num % i == 0){
            divi++;
        }
    }

    if(divi == 2){
        primos[contadores] = num;
        contadores++;
    }
      num++;
    }

    printf("Primeiros 7 números primos: \n");
    for(int i=0; i<7;i++){
        printf("%d ", primos[i]);
    }
}

