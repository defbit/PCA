#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero, numeroMaior, numeroMenor, i;


printf("Digite aqui o 1� n�mero: ");
scanf("%d", &numero);

numeroMaior = numero;
numeroMenor = numero;

for(i = 1; i<15; i++){
    printf("digite aqui o %d� n�mero: ",i+1);
    scanf("%i", &numero);

    if(numero>numeroMaior){
        numeroMaior = numero;
    }
    else if(numero<numeroMenor){
            numeroMenor = numero;
            }
    }
printf("O menor numero �: %d", numeroMenor);
printf("O maior numero �: %d", numeroMaior);
}
