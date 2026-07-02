#include <stdio.h>
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};
int main() {
    struct Produto p;
    scanf("%s %f %d", p.nome, &p.preco, &p.quantidade);
    printf("Produto: %s | R$%.2f | Qtd: %d\n", p.nome, p.preco, p.quantidade);
    return 0;
}
