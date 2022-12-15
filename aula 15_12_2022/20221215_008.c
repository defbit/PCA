#include <stdio.h>
#include <stdlib.h>


float main()
{
    float celcius, farenheit;
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &celcius);
    farenheit = (((celcius/5)*9)+32);
    printf("A temperatura em farenheit é igual a: %1.f", farenheit);
    return 0;
}
