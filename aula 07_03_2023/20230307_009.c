#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *posicoesLetra(char *str, char letra, int *tamanho) {
    int *posicoes = NULL;
    int i, j;

    *tamanho = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == letra) {
            (*tamanho)++;
            posicoes = (int*)realloc(posicoes, (*tamanho) * sizeof(int));
            posicoes[(*tamanho) - 1] = i;
        }
    }

    return posicoes;
}
int main() {
    char str[50], letra;
    int *posicoes, tamanho, i;

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    posicoes = posicoesLetra(str, letra, &tamanho);

    printf("Posicoes onde a letra '%c' foi encontrada:\n", letra);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", posicoes[i]);
    }
    printf("\n");

    free(posicoes);

    return 0;
}
