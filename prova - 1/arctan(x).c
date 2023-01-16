#include <stdio.h>
#include <stdlib.h>

double solicitaNumero() {
    double num;
    printf("Entre com um numero real positivo no range [0,1]: ");
    scanf("%lf", &num);
    return num;
}

double arctan(double x) {
    double resultado = x;
    double termo = x;
    int cont = 3;
    while (fabs(termo) > 0.0001) {
        termo = -termo * x * x / (cont - 2);
        resultado += termo;
        cont += 2;
    }
    return resultado;
}

void imprimeResultado(double x, double arctanx) {
    printf("Arctan de %lf e %lf\n", x, arctanx);
}

int main() {
    double x = solicitaNumero();
    double arctanx = arctan(x);
    imprimeResultado(x, arctanx);
    return 0;
}
