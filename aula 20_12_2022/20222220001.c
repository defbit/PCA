#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, numeros, soma;
    soma = 0;
    for (cont = 1; cont <= 5; cont++){
        printf("Digite aqui os 5 n�meros: ");
        scanf("%d", &numeros);
        soma = soma + numeros;
    }
    printf("A soma dos valores digitados �: %.1d", soma);
    return 0;
}
