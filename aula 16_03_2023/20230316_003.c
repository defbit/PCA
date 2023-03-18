#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2; 
    int n = 3; 

    
    int **matriz = (int **) malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n; // dimensões das matrizes

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    double **matriz1 = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matriz1[i] = (double *) malloc(n * sizeof(double));
    }

    double **matriz2 = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matriz2[i] = (double *) malloc(n * sizeof(double));
    }

    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz1[i][j]);
        }
    }
    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz2[i][j]);
        }
    }

    double **matriz3 = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matriz3[i] = (double *) malloc(n * sizeof(double));
        for (int j = 0; j < n; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Resultado da soma das duas matrizes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matriz3[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);

    return 0;
}
