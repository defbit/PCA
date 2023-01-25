#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vetor[], int n) {
int i, j, min, aux;
for (i = 0; i < n-1; i++) {
min = i;
for (j = i+1; j < n; j++) {
if (vetor[j] < vetor[min]) {
min = j;
}
}
aux = vetor[i];
vetor[i] = vetor[min];
vetor[min] = aux;
}
}

int main() {
int n;
printf("Insira o tamanho do vetor:");
scanf("%d", &n);
int vetor[n];
printf("Insira os elementos do vetor:");
for (int i = 0; i < n; i++) {
scanf("%d", &vetor[i]);
}
selectionSort(vetor, n);
printf("Vetor ordenado: ");
for (int i = 0; i < n; i++) {
printf("%d ", vetor[i]);
}
return 0;
}

