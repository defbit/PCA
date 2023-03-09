#include <stdio.h>

int ordena_valores(int *a, int *b, int *c) {
    int aux;
    int iguais = 0;

    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }

    if (*b > *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }

    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }

    if (*a == *b && *b == *c) {
        iguais = 1;
    }

    return iguais;
}

int main() {
    int a, b, c;
    int iguais;

    printf("Digite tres valores inteiros:\n");
    scanf("%d%d%d", &a, &b, &c);

    iguais = ordena_valores(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    if (iguais) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Os tres valores sao diferentes.\n");
    }

    return 0;
}

