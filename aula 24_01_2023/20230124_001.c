#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [100];
    int i, j;

    for(i=0;i<100; i++){
        printf("digite aqui um número: ");
        scanf("%d", &numeros[i]);
    }
    for (j=99; j>=0; j--){
        printf("%d", numeros[j]);
    }
    return 0;
}
