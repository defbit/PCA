#include <stdio.h>
#include <stdlib.h>


int num, par, perfeito, n;

int main()
{
int par(){
do
{
    printf("Digite aqui um número: ");
    scanf("%d", &num);
    }while(num % 2 == 1);
     printf("O número %d é par\n", num);
     return 0;
}
int perfeito(){
    int i, soma = 0;
    printf("Digite aqui outro número: ");
    scanf("%d", &n);
    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        printf("O número %d é perfeito", n);
    else
        printf("O número %d não é perfeito", n);
}
par();
perfeito();
}

