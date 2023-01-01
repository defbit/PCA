#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, cont, soma, aux, i;
    aux = 0;

    printf("Digite aqui um número n:");
    scanf("%d", &n);


    for(i=1; i<n; i++)
    {
        if (n%i==0)
        {
            aux += i;
        }
    }
    if (aux == n)
    {
      printf("NUMERO PERFEITO");
    }
}
