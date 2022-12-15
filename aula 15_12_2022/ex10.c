#include <stdio.h>
#include <stdlib.h>

float main()
{
    float altura, peso;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    peso = (72.7*altura) - 58;
    printf("O peso ideal para esta altura é: %f", peso);


    return 0;
}
