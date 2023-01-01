#include <stdio.h>
#include <stdlib.h>

int main()
{

int numerador;
float resposta;

numerador = -1;
resposta = 0;

for (int denominador = 1; denominador <= 50; denominador++){
    numerador = numerador + 2;
    resposta = resposta + (numerador / denominador);
}

printf("%.2f", resposta);
}
