#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, numeros, soma;
    soma = 0;
    for (cont = 1; cont <= 5; cont++){
        printf("Digite aqui os 5 números: ");
        scanf("%d", &numeros);
        soma = soma + numeros;
    }
    printf("A soma dos valores digitados é: %.1d", soma);
    return 0;
}
