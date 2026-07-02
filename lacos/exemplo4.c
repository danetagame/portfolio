#include <stdio.h>

typedef struct {
    float x;
    float y;
} Ponto;

int main() {
    Ponto p1;
    p1.x = 5.5;
    p1.y = 10.2;
    
    printf("Coordenadas do Ponto: (%.1f, %.1f)\n", p1.x, p1.y);
    
    return 0;
}
