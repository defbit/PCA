#include <stdio.h>

int decimalParaBinario(int decimal) {
    int binario = 0, i = 1;
    while (decimal != 0) {
        int resto = decimal % 2;
        binario += resto * i;
        decimal /= 2;
        i *= 10;
    }
    return binario;
}
