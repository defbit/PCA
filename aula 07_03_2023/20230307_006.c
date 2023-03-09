#include <stdio.h>
#include <stdlib.h>

int soma_arrays(int *a, int *b, int *c, int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        c[i] = a[i] + b[i];
    }

    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c[5];
    int tamanho_a, tamanho_b;
    int i;

    tamanho_a = sizeof(a) / sizeof(a[0]);
    tamanho_b = sizeof(b) / sizeof(b[0]);

    if (tamanho_a != tamanho_b) {
        printf("Os arrays nao possuem o mesmo tamanho.\n");
        return 0;
    }

    if (!soma_arrays(a, b, c, tamanho_a)) {
        printf("Erro ao somar os arrays.\n");
        return 0;
    }

    printf("Resultado da soma:\n");

    for (i = 0; i < tamanho_a; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}
