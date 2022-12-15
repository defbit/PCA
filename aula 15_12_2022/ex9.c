#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, v1;
    float c, v2, v3;

    printf("digite os valores inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Digite um valor real: ");
    scanf("%f", &c);
    v1 = 2*a* b/2;
    v2 = (3*a) + c;
    v3 = c * c * c;

    printf("o valor de v1 é igual a: %.1d", v1);
    printf("\n");
    printf("o valor de v2 é igual a: %.1f", v2);
    printf("\n");
    printf("o valor de v3 é igual a: %.3f", v3);


    return 0;
}
