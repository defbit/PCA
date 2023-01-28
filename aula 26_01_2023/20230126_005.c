#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int somaLinha4 = 0, somaColuna2 = 0;
    int i, j;

    printf("Digite os valores da matriz 5x5: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    printf("Diagonal secundária: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", matriz[i][5-1-i]);
    }
    printf("\n");

    for (j = 0; j < 5; j++) {
        somaLinha4 += matriz[3][j];
    }
    printf("Soma da linha 4: %d\n", somaLinha4);

    for (i = 0; i < 5; i++) {
        somaColuna2 += matriz[i][1];
    }
    printf("Soma da coluna 2: %d\n", somaColuna2);

    printf("Tudo, exceto a diagonal principal: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
