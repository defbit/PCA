#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;
    float massa;

    tempo = 0;


    printf("Digite aqui a massa inicial do material (Em gramas): ");
    scanf("%f", &massa);

    while(massa >= 0.05){
        massa = massa / 2;
        tempo += 50;
    }
    printf("O tempo foi de %d segundos.", tempo);
}
