#include <stdio.h>
#include <stdlib.h>

void inverterSequencia(int seq[], int n) {
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", seq[i]);
    }
}

int main() {
    int n;
    int seq[n];

    printf("Insira o tamanho da sequencia: ");
    scanf("%d", &n);
    printf("Insira os elementos da sequencia: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &seq[i]);
    }
    printf("Sequencia invertida: ");
    inverterSequencia(seq, n);
    return 0;
}
