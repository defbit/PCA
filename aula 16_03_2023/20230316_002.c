#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2; 
    int n = 3; 

    
    int **matriz = (int **) malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int *) malloc(n * sizeof(int));
    }

   
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    printf("Valores da matriz usando aritmética de ponteiros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *((*(matriz + i)) + j));
        }
        printf("\n");
    }

    printf("Valores da matriz usando indexes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
