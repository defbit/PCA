#include <stdio.h>
#include <stdlib.h>

int* sequenciaPares(int seq[], int n, int* tamanho) {
int pares[n];
int cont = 0;
for (int i = 0; i < n; i++) {
if (seq[i] % 2 == 0) {
pares[cont] = seq[i];
cont++;
}
}
*tamanho = cont;
return pares;
}

int main() {
int n;
printf("Insira o tamanho da sequencia: \n");
scanf("%d", &n);
int seq[n];
printf("Insira os elementos da sequencia: \n");
for (int i = 0; i < n; i++) {
scanf("%d", &seq[i]);
}
int tamanho;
int* pares = sequenciaPares(seq, n, &tamanho);
printf("Sequencia de numeros pares:");
for (int i = 0; i < tamanho; i++) {
printf("%d ", pares[i]);
}
return 0;
}
