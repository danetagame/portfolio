#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da lista duplamente encadeada
typedef struct nodeDuplo {
    int info;
    struct nodeDuplo* ant;
    struct nodeDuplo* prox;
} ListaDupla;

// Função simples para imprimir a lista de trás para a frente
void imprimir_inverso(ListaDupla* ultimo_no) {
    ListaDupla* p = ultimo_no; // Começamos pelo último nó da lista

    printf("Lista lida no sentido inverso: ");
    
    // Enquanto o ponteiro não chegar ao início (NULL)
    while (p != NULL) {
        printf("%d ", p->info); // Imprime o valor
        p = p->ant;             // Anda para trás usando o ponteiro 'anterior'
    }
    printf("\n");
}
