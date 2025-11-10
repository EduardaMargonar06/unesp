#include <stdio.h>
#include <string.h>

typedef struct {
    float x;
    float y;
    float z;
} Coordenadas;

typedef struct {
    int id;
    Coordenadas posicao;
} Ponto3D;

int main() {
    Ponto3D meu_ponto;

   meu_ponto.id = 101; 
    meu_ponto.posicao.x = 7.5; 
    meu_ponto.posicao.y = 12.0; 
    meu_ponto.posicao.z = -3.8;
    printf("--- Dados do Ponto 3D ---\n");
    printf("ID: %d\n", meu_ponto.id);
    
    printf("Coordenada X: %.2f\n", meu_ponto.posicao.x);
    printf("Coordenada Y: %.2f\n", meu_ponto.posicao.y);
    printf("Coordenada Z: %.2f\n", meu_ponto.posicao.z);

    return 0;
}
