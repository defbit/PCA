#include <stdio.h>
#include <stdlib.h>

int main() {
  int m,
      n, i,
      inicio;

  printf("Digite aqui o valor de m: ");
  scanf("%d", &m);

  inicio = 1;
  for (n = 1; n <= m; n++) {
    printf("%d*%d*%d = %d", n, n, n, inicio);
    for (i = 1; i < n; i++)
      printf("+%d", inicio + 2 * i);
    inicio = inicio + 2 * n;           /* inicio da proxima sequencia */
    printf("\n");
  }

  return 0;
}
