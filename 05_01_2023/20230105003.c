#include <stdio.h>
#include <stdlib.h>


int num, par, perfeito, n;

int main()
{
int par(){
do
{
    printf("Digite aqui um n�mero: ");
    scanf("%d", &num);
    }while(num % 2 == 1);
     printf("O n�mero %d � par\n", num);
     return 0;
}
int perfeito(){
    int i, soma = 0;
    printf("Digite aqui outro n�mero: ");
    scanf("%d", &n);
    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        printf("O n�mero %d � perfeito", n);
    else
        printf("O n�mero %d n�o � perfeito", n);
}
par();
perfeito();
}

