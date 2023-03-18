#include <stdio.h>
#include <stdlib.h>

int *ler_vetor(int n) {
    int *vetor = (int *) malloc(n * sizeof(int));
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void encontrar_max_min(int *vetor, int n, int *maximo, int *minimo) {
    *maximo = vetor[0];
    *minimo = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maximo) {
            *maximo = vetor[i];
        }
        if (vetor[i] < *minimo) {
            *minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    int *vetor = ler_vetor(n);

    int maximo, minimo;
    encontrar_max_min(vetor, n, &maximo, &minimo);

    printf("O maior valor do vetor é: %d\n", maximo);
    printf("O menor valor do vetor é: %d\n", minimo);

    free(vetor);

    return 0;
}
