#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[5]={1,2,3,4,5};
    int *ponteiro = array;

    for(int i=0;i<5;i++){
        *(ponteiro + i) += 10; /*aritmetica de ponteiros*/
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ponteiro + i));
    }
    printf("\n");
}

