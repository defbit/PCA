#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int somaPar = 0;
    int somaImpar = 0;

    do{
        printf("Digite aqui um número inteiro(para sair digite um número negativo): ");
        scanf("%i", &numero);
        if (numero<0){
            break;
        }
        if (numero%2==0){
            somaPar += numero;
        }else{
        somaImpar += numero;
        }
    }while(1);
    printf("A soma dos numeros pares é: %i", somaPar);
    printf("A soma dos numeros impares é: %i", somaImpar);
}
