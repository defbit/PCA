#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int valor;

    printf("Entre com os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Entre com o valor a ser multiplicado: ");
    scanf("%d", &valor);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = matriz[i][j] * valor;
        }
    }

    printf("Valores da matriz multiplicada: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
