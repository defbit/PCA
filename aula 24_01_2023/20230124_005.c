#include <stdio.h>
#include <stdlib.h>

void fatorialSequencia(int seq[], int n) {
    for (int i = 0; i < n; i++){
        int fatorial = 1;
    for (int j = 1; j <= seq[i]; j++){
        fatorial *= j;
    }seq[i] = fatorial;
}
}

int main(){
int n;
    printf("Insira o tamanho da sequencia: ");
    scanf("%d", &n);
    int seq[n];
    printf("Insira os elementos da sequencia: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }
    fatorialSequencia(seq, n);
    printf("Sequencia com os fatores: ");
    for (int i = 0; i < n; i++){
        printf("%d ", seq[i]);
    }
    return 0;
}
