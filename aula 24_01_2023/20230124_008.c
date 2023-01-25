#include <stdio.h>
#include <stdlib.h>

int produtoEscalar(int x[], int y[], int n){
    int resultado = 0;
    for (int i = 0; i < n; i++){
        resultado += x[i] * y[i];
    }
return resultado;
}

int main() {
int n;
    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &n);
    int x[n], y[n];
    printf("Insira os elementos do primeiro vetor:");
    for (int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    printf("Insira os elementos do segundo vetor:");
    for (int i = 0; i < n; i++){
        scanf("%d", &y[i]);
    }
    int resultado = produtoEscalar(x, y, n);
    printf("Produto escalar dos vetores: %d", resultado);
    return 0;
}

