#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, m;
  int x, y;
  int valor;
  int xmax, ymax;
  int valormax;

  printf("Digite aqui os valores de n e m: ");
  scanf ("%d %d", &n, &m);


  xmax = 0;
  ymax = 0;
  valormax = 0;

    {
      for (y = 0; y <= m; y++)
	{
          valor = x*y - x*x + y;
          if (valor > valormax)
	    {
              valormax = valor;
              xmax = x;
              ymax = y;
	    }
	}
    }

  printf("O Valor maximo da funcao é igual a = %d com x = %d e y = %d\n",
          valormax, xmax, ymax);

  return 0;
}

