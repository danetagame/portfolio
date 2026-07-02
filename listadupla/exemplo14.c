#include <stdlib.h>
#include <stdio.h>

typedef struct nodeDuplo {
    int info;
    struct nodeDuplo* ant;
    struct nodeDuplo* prox;
} ListaDupla;

ListaDupla* inserirInicio(ListaDupla* l, int valor) {
    ListaDupla* novo = (ListaDupla*) malloc(sizeof(ListaDupla));
    novo->info = valor;
    novo->prox = l;
    novo->ant = NULL;
    if(l != NULL) {
        l->ant = novo;
    }
    return novo;
}
