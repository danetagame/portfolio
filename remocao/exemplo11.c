#include <stdlib.h>

Lista* remove_inicio(Lista* l) {
    if(l != NULL) {
        Lista* p = l;
        l = l->prox;
        free(p);
    }
    return l;
}
