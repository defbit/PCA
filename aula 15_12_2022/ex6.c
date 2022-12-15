#include <stdio.h>
#include <stdlib.h>

float main()
{
    float valor_por_hora, horas, salario;
    printf("Digite o valor que você ganha por hora: ");
    scanf("%f", &valor_por_hora);
    printf("Digite o numero de horas que você trabalha ao mês:");
    scanf("%f", &horas);
    salario = valor_por_hora * horas;
    printf("Seu salario sera igual a: %1.f", salario);

    return 0;
}
