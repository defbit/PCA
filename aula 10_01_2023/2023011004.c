#include <stdio.h>

int corresponde(int x, int y) {
    if (x < y) {
        return 0;
    }
    int n_digitos_y = 0;
    while (y > 0) {
        n_digitos_y++;
        y /= 10;
    }
    int n_digitos_x = 0;
    while (x > 0) {
        n_digitos_x++;
        int fator = 1;
        for (int i = 0; i < n_digitos_x - 1; i++) {
            fator *= 10;
        }
        if (x == y / fator) {
            return 1;
        }
        x /= 10;
    }
    return 0;
}
