#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  int x;

  if (n == 1) {
    return(1);
  }

  if (n == 2) {
    return(1);
  }

  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}


int main() {
  int n,i;

  printf("Digite aqui o numero de termos da sequencia: ");
  scanf("%d", &n);

  while(n <= 0) {
    printf("Digite um n�mero maior que zero para come�ar essa sequencia: ");
    scanf("%d", &n);
  }

  for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}
