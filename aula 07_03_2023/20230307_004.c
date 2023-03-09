#include <stdio.h>

int main() {
    int array[8];
    int *ptr_array = array;
    int i;

    // Ler o array do teclado
    printf("Digite 8 numeros inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", ptr_array);
        ptr_array++;
    }

    // Imprimir o dobro de cada valor
    printf("Dobro dos valores:\n");
    ptr_array = array;
    for (i = 0; i < 8; i++) {
        printf("%d ", (*ptr_array) * 2);
        ptr_array++;
    }
    printf("\n");

    // Imprimir o endereço das posições contendo valores pares
    printf("Endereco das posicoes com valores pares:\n");
    ptr_array = array;
    for (i = 0; i < 8; i++) {
        if ((*ptr_array) % 2 == 0) {
            printf("%p ", ptr_array);
        }
        ptr_array++;
    }
    printf("\n");

    return 0;
}

