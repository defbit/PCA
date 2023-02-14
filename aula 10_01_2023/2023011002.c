#include <stdio.h>

int contaDigitos(int n, int d) {
    int cont = 0;
    while (n > 0) {
        if (n % 10 == d) {
            cont++;
        }
        n /= 10;
    }
    return cont;
}

int sao_permutacoes(int a, int b) {
    if (a <= 0 || b <= 0) {
        return 0;
    }
    int n_digitos_a = 0, n_digitos_b = 0;
    for (int d = 0; d <= 9; d++) {
        int n_a = contaDigitos(a, d);
        int n_b = contaDigitos(b, d);
        if (n_a != n_b) {
            return 0;
        }
        n_digitos_a += n_a;
        n_digitos_b += n_b;
    }
    return n_digitos_a == n_digitos_b;
}
