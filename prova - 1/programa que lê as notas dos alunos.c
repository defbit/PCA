
@@ -0,0 +1,30 @@
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, maior, menor, soma = 0, cont = 0;
    while (1) {
        printf("Entre com a nota do aluno: ");
        scanf("%f", &nota);
        if (nota < 0) {
            break;
        }
        if (cont == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }
        soma += nota;
        cont++;
    }
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media da turma: %.2f\n", soma / cont);
    return 0;
}
