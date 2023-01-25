#include <stdio.h>
#include <stdlib.h>

void contar_faces(int lancamentos[], int n){
    int cont[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++){
        cont[lancamentos[i]-1]++;
    }
    for (int i = 0; i < 6; i++){
        printf("Face %d: %d ocorrências", i+1, cont[i]);
    }
}

int main() {
int n;
    printf("Insira o numero de lançamentos: ");
    scanf("%d", &n);
    int lancamentos[n];
    printf("Insira os resultados dos lançamentos (de 1 a 6): \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &lancamentos[i]);
    }
contar_faces(lancamentos, n);
return 0;
}
