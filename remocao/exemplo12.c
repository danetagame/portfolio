#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct no {
    int info;
    struct no* prox;
} Lista;

// Função para remover um elemento específico por valor
Lista* remover_por_valor(Lista* l, int valor_a_remover) {
    Lista* ant = NULL; 
    Lista* p = l;      

    // Procura o valor na lista, guardando sempre a referência do nó anterior
    while (p != NULL && p->info != valor_a_remover) {
        ant = p;
        p = p->prox;
    }

    // Se o ponteiro chegou ao fim e não encontrou o valor, devolve a lista original
    if (p == NULL) {
        return l;
    }

    // Se o valor a remover for logo o primeiro elemento da lista
    if (ant == NULL) {
        l = p->prox;
    } else {
        // Se o valor estiver no meio ou no final, o anterior aponta para o próximo do removido
        ant->prox = p->prox;
    }

    free(p); 
    
    return l;
}
