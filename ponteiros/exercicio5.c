#include <stdio.h>
int main() {
    int num = 10;
    int *p = &num;
    printf("Valor de num via ponteiro: %d\n", *p);
    return 0;
}
