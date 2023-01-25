#include <stdio.h>
#include <stdlib.h>

void sequenciaPares(int seq[], int n) {
int pares[n];
int cont = 0;
for (int i = 0; i < n; i++){
    if (seq[i] % 2 == 0){
        pares[cont] = seq[i];
        cont++;
    }
}
printf("Sequencia de numeros pares:\n");
    for (int i = 0; i < cont; i++){
        printf("%d\n", pares[i]);
    }
}

int main() {
int n;
    printf("Insira o tamanho da sequencia: \n");
    scanf("%d", &n);
    int seq[n];
    printf("Insira os elementos da sequencia: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }
sequenciaPares(seq, n);
return 0;
}
