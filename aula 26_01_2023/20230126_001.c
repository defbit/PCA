#include <stdio.h>
#include <stdlib.h>



int main(){
int linhaA = 3, linhaB = 3, colunaA = 5, colunaB = 5, soma, i, j;


    int matriz1[3][5] = {{9, 4, 7, 8, 5},{5, 7, 7, 8, 10},{8, 4, 4, 5, 9}};

    int matriz2[3][5] = {{3, 5, 8, 9, 5},{5, 6, 8, 10, 9},{10, 10, 5, 6, 8}};

    for (i=0; i<linhaA; i++){
        for(j=0; j<colunaA;j++){
            soma = matriz1[i][j] + matriz2[i][j];
            printf("resultado[%d][%d]: %d\n", i+1, j+1, soma);
        }
    }
    return 0;
}
