#include <stdio.h>
int main() {
    int vet[5], maior = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
        if(i == 0 || vet[i] > maior) {
            maior = vet[i];
        }
    }
    printf("Maior valor: %d\n", maior);
    return 0;
}
