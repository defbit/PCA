#include <stdio.h>
#include <stdlib.h>


    int main()
{
    int ap1, ap2, ap3, ap4, media;
    printf("Digite aqui as notas:");
    scanf("%d%d%d%d", &ap1, &ap2, &ap3, &ap4);
    media = (ap1 + ap2 + ap3 + ap4)/4;
    printf("A média final é: %d", media);

    return 0;
}
