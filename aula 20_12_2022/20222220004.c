#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 1, valor_maior, valor_menor, valor;

    while (contador <= 20){
        printf("digite aqui um número:");
        scanf("%d", &valor);

        if(contador == 1){
            valor_maior = valor;
            valor_menor = valor;
        }

        if(valor > valor_maior){
            valor_maior = valor;
        }else if(valor<valor_menor){
            valor_menor = valor;
        }
        contador++;
    }
    printf("\n");
    printf(" O maior valor inserido foi: %d \n", valor_maior);
    printf(" O menor valor inserido foi: %d \n" , valor_menor);

    return 0;
}
