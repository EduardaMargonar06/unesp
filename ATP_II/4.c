#include <stdio.h>

int main()
{
    float array[8];

    for(int i=2;i<8;i++){
        array[0]=0.0;
        array[1]=1.0;
        array[i]=array[i-1]+array[i-2];
    }

    for(int i=0;i<8;i++){
        printf("%f ", array[i]);
    }


}

