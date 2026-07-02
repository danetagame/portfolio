#include <stdio.h>
#define TAM 5
int fila[TAM];
int fim = 0;

void enqueue(int valor) {
    if(fim < TAM) {
        fila[fim] = valor;
        fim++;
    } else {
        printf("Fila cheia!\n");
    }
}
