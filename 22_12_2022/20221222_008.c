#include <stdio.h>
#include <stdlib.h>

VERDADEIRO = 1;
FALSO = 0;

int main() {
  int n, catetoA, catetoB, hipotenusa;
  int achou;

  printf("Digite o tamanho da hipotenusa: ");
  scanf("%d" , &n);

  for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {
    achou = FALSO;
    for (catetoA = 1; catetoA < hipotenusa && !achou; catetoA++) {
      catetoB = catetoA;
      while (catetoA*catetoA + catetoB*catetoB < hipotenusa*hipotenusa)
	catetoB++;
      if (catetoA*catetoA + catetoB*catetoB == hipotenusa*hipotenusa){
	printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, catetoA, catetoB);
	achou = VERDADEIRO;
      }
    }
  }

  return 0;
}
