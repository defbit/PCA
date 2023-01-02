#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero, numeroMaior, numeroMenor, i;


printf("Digite aqui o 1º número: ");
scanf("%d", &numero);

numeroMaior = numero;
numeroMenor = numero;

for(i = 1; i<15; i++){
    printf("digite aqui o %dº número: ",i+1);
    scanf("%i", &numero);

    if(numero>numeroMaior){
        numeroMaior = numero;
    }
    else if(numero<numeroMenor){
            numeroMenor = numero;
            }
    }
printf("O menor numero é: %d", numeroMenor);
printf("O maior numero é: %d", numeroMaior);
}
