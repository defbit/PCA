#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int x, i, j;

    printf("Entre com os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                printf("O valor de X encontrado: item matriz[%d][%d]\n", i, j);
            }


    }
    if (matriz[i][j] != x) {
                printf("O valor de X não foi encontrado nessa matriz.");
    return 0;
}
}
