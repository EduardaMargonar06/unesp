#include <stdio.h>

void subconjuntos(int arr[], int n, int i, int temp[], int k){
    if(i == n){
        printf("{ ");
        for(int j=0;j<k;j++) printf("%d ", temp[j]);
        printf("}\n");
        return;
    }
    subconjuntos(arr, n, i+1, temp, k)
    temp[k] = arr[i];
    subconjuntos(arr, n, i+1, temp, k+1);
}

int main(){
    int arr[] = {1,2,3};
    int temp[10];
    subconjuntos(arr, 3, 0, temp, 0);
    return 0;
}
