#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_por_hora, horas, salario, salario_liquido, inss, sindicato;
    printf("Digite o valor que você ganha por hora: ");
    scanf("%f", &valor_por_hora);
    printf("Digite o numero de horas que você trabalha ao mês:");
    scanf("%f", &horas);
    salario = valor_por_hora * horas;
    printf("Seu salario bruto sera igual a: %1.f", salario);
    salario_liquido = salario * 0.76;
    inss = salario * 0.08;
    sindicato = salario * 0.11;

    printf("\n");
    printf("o valor pago ao INSS foi de: %.1f", inss);
    printf("\n");
    printf("o valor pago ao sindicato foi de: %.1f", sindicato);
    printf("\n");
    printf("Seu salario liquido sera igual a: %.1f", salario_liquido);

    return 0;
}
