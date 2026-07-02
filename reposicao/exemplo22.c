#include <stdio.h>

int main() {
    int fila[3];
    int inicio = 0;
    int fim = 0;

    fila[fim] = 10;
    fim++;
    
    fila[fim] = 20;
    fim++;

    printf("%d\n", fila[inicio]);
    inicio++;

    return 0;
}
