#include <stdio.h>
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
int main() {
    struct Aluno a = {"Daniel", 29, 9.5};
    printf("Aluno: %s, Idade: %d, Nota: %.1f\n", a.nome, a.idade, a.nota);
    return 0;
}
