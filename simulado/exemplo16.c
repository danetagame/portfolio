#include <stdio.h>
void imprimeCircular(Lista* l) {
    if(l != NULL) {
        Lista* p = l;
        do {
            printf("%d ", p->info);
            p = p->prox;
        } while(p != l);
    }
}
