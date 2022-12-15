#include <stdio.h>
#include <stdlib.h>

float main()
{
    float farenheit, celcius;
    printf("Digite a temperatura em farenheit: ");
    scanf("%f", &farenheit);
    celcius =(5*((farenheit-32)/9));
    printf("A temperatura em celcius é igual a: %f", celcius);
    return 0;
}
