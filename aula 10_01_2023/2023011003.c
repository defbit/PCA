#include <stdio.h>
#include <math.h>

int corresponde(int x, int y) {
    if (x < y) {
        return 0;
    }
    int n_digitos_y = (int)log10(y) + 1;
    int n_digitos_x = (int)log10(x) + 1;
    int fator = pow(10, n_digitos_y);
    return y == x % fator;
}
