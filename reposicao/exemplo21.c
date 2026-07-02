#include <stdio.h>

int main() {
    int vet[3] = {5, 10, 15};
    int soma = 0;

    for(int i = 0; i < 3; i++) {
        soma = soma + vet[i];
    }

    printf("%d\n", soma);
    return 0;
}
