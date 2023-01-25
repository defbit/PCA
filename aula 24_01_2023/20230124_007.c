#include <stdio.h>
#include <stdlib.h>

void contarFaces(int lan�amentos[], int n) {
int contador[6] = {0, 0, 0, 0, 0, 0};
for (int i = 0; i < n; i++) {
contador[lan�amentos[i]-1]++;
}
for (int i = 0; i < 6; i++) {
printf("Face %d: %d ocorr�ncias\n", i+1, contador[i]);
}
}

int main() {
int n;
printf("Insira o numero de lan�amentos: ");
scanf("%d", &n);
int lan�amentos[n];
printf("Insira os resultados dos lan�amentos (de 1 a 6): \n");
for (int i = 0; i < n; i++) {
scanf("%d", &lan�amentos[i]);
}
contarFaces(lan�amentos, n);
return 0;
}
