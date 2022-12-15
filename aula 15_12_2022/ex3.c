#include <stdio.h>
#include <stdlib.h>

int main()
{
  float metros, centimetros;

  printf("Digite o valor em metros: ");
  scanf("%f", &metros);
  centimetros = metros * 100;
  printf("O valor em centimetros é: %1.f cm", centimetros);

  return 0;

}
