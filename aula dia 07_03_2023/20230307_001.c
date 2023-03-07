#include <stdio.h>

void imprime_vetor(float *inicio, float *fim){
    for(; inicio<= fim; inicio++){
        printf("%.2f\n", *inicio);
        
    }printf("\n");
}
int main() {
    float variaveis1[5] = {1.0, 1.5, 2.4, 5.6, 3.4};
    float variaveis2[3] = {10.0, 15.0, 24.0};
    float variaveis3[10] = {2.0, 5.6, 10.23, 23.14, 12.5, 45.2, 2.1, 3.4, 5.2, 7.8};
    
    printf("Vetor 1:");
    printf("\n");
    imprime_vetor(&variaveis1[0], &variaveis1[4]);
    printf("Vetor 2:");
    printf("\n");
    imprime_vetor(&variaveis2[0], &variaveis2[3]);
    printf("Vetor 3:");
    printf("\n");
    imprime_vetor(&variaveis3[0], &variaveis3[9]);
    return 0;
}