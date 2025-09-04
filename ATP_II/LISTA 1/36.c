#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int maior = INT_MIN,
        x;
    for(int i=0;i<argc;i++){
        x = atoi(argv[i]);
        if(x>maior){
            maior = x;
        }
    }
    
    printf("O maior é %d", maior);
}
