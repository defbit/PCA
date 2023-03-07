#include <stdio.h>
#define NULL 0

int imprime_vetor(int *inicio, int *fim){
    int cont = 0;
    for(; inicio<= fim; inicio++){
        if (*inicio == 100){
            printf("%dº 2 encontrado: %p", cont+1, inicio);
            printf("\n");
            cont++;
        
        }return(0);
    }
}
int main(){
    int variaveis1[10] = {2, 52, 3, 46, 3, 2, 6, 2, 10, 43};
    
    printf("Os enderecos sao: ");
    printf("\n");
    imprime_vetor(&variaveis1[0], &variaveis1[9]);
    return 0;
}