#include <stdio.h>
#include <stdlib.h>

float main()
{
    float valor_por_hora, horas, salario;
    printf("Digite o valor que voc� ganha por hora: ");
    scanf("%f", &valor_por_hora);
    printf("Digite o numero de horas que voc� trabalha ao m�s:");
    scanf("%f", &horas);
    salario = valor_por_hora * horas;
    printf("Seu salario sera igual a: %1.f", salario);

    return 0;
}
