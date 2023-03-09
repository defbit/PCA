#include <stdio.h>

int main() {
    int inteiro = 10, *ptr_inteiro = &inteiro;
    float real = 3.14, *ptr_real = &real;
    char caractere = 'a', *ptr_caractere = &caractere;

    printf("Valores iniciais:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    *ptr_inteiro = 20;
    *ptr_real = 2.71;
    *ptr_caractere = 'b';

    printf("Valores modificados:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    return 0;
}
