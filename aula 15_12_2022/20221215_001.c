#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;
    printf("Digite os numeros que deseja somar: ");
    scanf("%d%d", &a, &b);
    soma = a + b;
    printf("A soma entre %d e %d é igual a: %d", a, b, soma);
    return 0;
}
