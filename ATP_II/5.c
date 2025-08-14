#include <stdio.h>

int main(){

int vetor[5], vetor_inve[5], num;
int i=0, j=0;

for(i=0;i<5;i++){
    printf("Digite o %dº numero: ", i+1);
    scanf("%d", &num);

    vetor[i]=num;
}

for(i=4;i>=0;i--){
    vetor_inve[j]=vetor[i];
    j++;
}

for(j=0;j<5;j++){
    printf("%d ", vetor_inve[j]);
}
}
