#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0;
    printf("Digite aqui um número: ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
        if(num%i == 0)
            cont++;
    if(cont == 2)
        printf("o número %d é primo", num);
    else
        printf("o númeor %d não é primo", num);
    return 0;
}
