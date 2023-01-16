#include <stdio.h>
#include <stdlib.h>

int solicitaNumero() {
    int num;
    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);
    return num;
}

unsigned long long hiperfatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        int fat = 1;
        for (int j = i; j > 0; j--) {
            fat *= j;
        }
        resultado *= fat;
    }
    return resultado;
}

void imprimeResultado(int num, unsigned long long hiper) {
    printf("O hiperfatorial de %d e %llu\n", num, hiper);
}

int main() {
    int num = solicitaNumero();
    unsigned long long hiper = hiperfatorial(num);
    imprimeResultado(num, hiper);
    return 0;
}
