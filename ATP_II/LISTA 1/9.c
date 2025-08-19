#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[20];

    for(int i=0;i<20;i++){
        array[i] = rand () % 100;
    }

    for(int i=0;i<20;i++){
        printf("%d ", array[i]);
    }


}
