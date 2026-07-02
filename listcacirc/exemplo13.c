#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct no {
    int info;
    struct no* prox;
} Lista;

// Função para contar a quantidade de nós numa lista circular
int contarNos(Lista* l) {
    // Se a lista estiver vazia, devolve 0
    if (l == NULL) {
        return 0; 
    }

    int contador = 0;
    Lista* p = l;

    // Utilizamos o do-while porque precisamos de entrar no ciclo pelo menos uma vez
    // antes de verificar se o próximo nó é novamente o início da lista
    do {
        contador++;
        p = p->prox;
    } while (p != l);

    return contador;
}

int main() {
    // 1. Criar o primeiro nó de forma dinâmica (como pedia o exercício)
    Lista* no1 = (Lista*) malloc(sizeof(Lista));
    no1->info = 50; // Valor 50 exigido na atividade
    no1->prox = no1; // Aponta para si mesmo (fechando o círculo inicial)
    
    // 2. Criar um segundo nó para testar a contagem
    Lista* no2 = (Lista*) malloc(sizeof(Lista));
    no2->info = 80;
    
    // 3. Ligar os nós de forma circular: [50] -> [80] -> [50]...
    no1->prox = no2;
    no2->prox = no1; 

    // 4. Chamar a função e imprimir o resultado no ecrã
    int total = contarNos(no1);
    printf("A lista circular contem %d no(s).\n", total);

    return 0;
}
