#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0;
    printf("Digite aqui um n�mero: ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
        if(num%i == 0)
            cont++;
    if(cont == 2)
        printf("o n�mero %d � primo", num);
    else
        printf("o n�meor %d n�o � primo", num);
    return 0;
}
