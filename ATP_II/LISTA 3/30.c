#include <stdio.h>
#include <string.h>

typedef struct {
    float coord_x;
    float coord_y;
    float coord_z;
} Coordenadas;

typedef struct {
    char nome[20]; 
    Coordenadas posicao;
} Ponto3D;

int main() {
    Ponto3D pontoA;
    
    pontoA.posicao.coord_x = 5.5; 
    pontoA.posicao.coord_y = -3.2; 
    pontoA.posicao.coord_z = 10.0;
    
    printf("Coordenadas (x, y, z):\n");
    printf("X: %.2f\n", pontoA.posicao.coord_x);
    printf("Y: %.2f\n", pontoA.posicao.coord_y);
    printf("Z: %.2f\n", pontoA.posicao.coord_z);
    
    return 0;
}
