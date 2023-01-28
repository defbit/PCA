#include <stdio.h>
#include <stdlib.h>



void soma_matrizes(int matriz1[3][5], int matriz2[3][5], int linhaA, int linhaB, int colunaA, int colunaB){
    for (int i=0; i<linhaA; i++){
        for(int j=0; j<colunaA;j++){
            int soma = matriz1[i][j] + matriz2[i][j];
            printf("resultado[%d][%d]: %d\n", i+1, j+1, soma);
        }
    }
}

int main(){
    int matriz1[3][5] = {{9, 4, 7, 8, 5},{5, 7, 7, 8, 10},{8, 4, 4, 5, 9}};

    int matriz2[3][5] = {{3, 5, 8, 9, 5},{5, 6, 8, 10, 9},{10, 10, 5, 6, 8}};

    soma_matrizes(matriz1, matriz2, 3, 3, 5, 5);
    return 0;
}
