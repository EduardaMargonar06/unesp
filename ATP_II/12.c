#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int array[12], neg=0;


    for(int i=0;i<12;i++){
        array[i]= (rand()% 41) - 20;

        if(array[i]<0){
            neg++;
        }
        printf("%d ", array[i]);
    }

    printf("\n%d", neg);
}
