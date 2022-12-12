#include <stdio.h>
#include <stdlib.h>

void main()
{
    int base, altura, area;
    printf("digite a base: \n");
    scanf("%d", &base);
    printf("digite a altura: \n");
    scanf("%d", &altura);

    area = (base * altura)/ 2;

    printf("A área do trinagulo é: %d\n", area);

}
