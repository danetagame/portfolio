#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
    int info;
    struct noArvore* esquerda;
    struct noArvore* direita;
} Arvore;

int main() {
    Arvore* raiz = (Arvore*) malloc(sizeof(Arvore));
    
    raiz->info = 50;
    raiz->esquerda = NULL;
    raiz->direita = NULL;

    printf("%d\n", raiz->info);

    free(raiz);
    return 0;
}
