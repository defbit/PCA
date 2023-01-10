#include <stdio.h>
#include <stdlib.h>

int fatorial, n;


int main()
{

    int fatorial(){
    int fatorial, n;
    printf("Insira aqui um valor para fatorial: ");
    scanf("%d", &n);

    for(fatorial = 1; n > 1; n = n - 1)
    fatorial = fatorial * n;

    printf("O valor do fatorial calculado é: %d", fatorial);
    return 0;
    }
    fatorial();
}


