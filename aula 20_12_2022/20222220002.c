#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0;

    for(i =1; i <= 50; i++)
        if(i % 2 == 1)
            soma += i;

    printf("Soma dos impares de 1 a 50: %d", soma);
}
