#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0;

    for(i = 100; i <= 200; i++)
        if(i % 2 == 1)
            soma += i;

    printf("Soma dos impares de 100 a 200: %d", soma);
}
