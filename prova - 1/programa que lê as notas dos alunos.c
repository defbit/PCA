
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, maior, menor, soma = 0, cont = 0;
    do{
        printf("Entre com a nota do aluno(para executar digite 123): ");
        scanf("%f", &nota);
        if(nota<0){
            exit(0);
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
    }while(nota != 123);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media da turma: %.2f\n", soma / cont);
    return 0;
}
