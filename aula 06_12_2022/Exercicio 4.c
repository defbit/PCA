#include <stdio.h>
#include <stdlib.h>

int main()
{
	float conta,gorjeta ;
	int porcentagem;
	printf("Conta: ");
	scanf("%f",&conta);
	printf("Percentual: ");
	scanf("%d",&porcentagem);
	gorjeta  = (conta * porcentagem) /100 ;
	printf("A gorjeta do garcom : %.2f", gorjeta);
    return 0;
}