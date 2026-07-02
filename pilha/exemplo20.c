#include <stdio.h>

int main() {
    int pilha[3]; 
    int topo = 0; 

    pilha[topo] = 10;
    topo++; 

    pilha[topo] = 20;
    topo++; 

    printf("Valores 10 e 20 colocados na pilha!\n");
    topo--; 
    
    printf("Valor removido do topo: %d\n", pilha[topo]);

    return 0;
}
