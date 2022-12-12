#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, novo_salario;
	float ajuste = 0.10 ;
	printf("Salario Atual: ");
	scanf("%f",&salario);
	novo_salario = salario*ajuste + salario ;
	printf("O salario ajustado: %.2f", novo_salario);
    return 0;
}