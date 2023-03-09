#include <stdio.h>

void encontra_min_max(int *v, int n, int *min, int *max) {
    int i;

    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {5, 3, 8, 1, 6, 4};
    int n = sizeof(v) / sizeof(v[0]);
    int min, max;

    encontra_min_max(v, n, &min, &max);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

    return 0;
}
