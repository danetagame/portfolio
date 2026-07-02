int conta_elementos(Pilha* p) {
    int cont = 0;
    Pilha* aux = p;
    while(aux != NULL) {
        cont++;
        aux = aux->prox;
    }
    return cont;
}
