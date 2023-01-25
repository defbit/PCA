#include <stdio.h>
#include <stdlib.h>

void contarFaces(int lançamentos[], int n) {
int contador[6] = {0, 0, 0, 0, 0, 0};
for (int i = 0; i < n; i++) {
contador[lançamentos[i]-1]++;
}
for (int i = 0; i < 6; i++) {
printf("Face %d: %d ocorrências\n", i+1, contador[i]);
}
}

int main() {
int n;
printf("Insira o numero de lançamentos: ");
scanf("%d", &n);
int lançamentos[n];
printf("Insira os resultados dos lançamentos (de 1 a 6): \n");
for (int i = 0; i < n; i++) {
scanf("%d", &lançamentos[i]);
}
contarFaces(lançamentos, n);
return 0;
}
