#include <stdio.h>
#include <stdlib.h>

float main()
{
   float lado, area, area2;
   printf("Digite o valor do lado do quadrado: ");
   scanf("%f",&lado);
   area=lado*lado;
   area2=area*2;
   printf("A área do quadrado é: %1.f", area);
   printf("\n");
   printf("O dobro da área do quadrado é: %1.f", area2);

   return 0;

}
