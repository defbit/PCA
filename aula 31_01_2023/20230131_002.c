#include <stdio.h>

void gasto_gasolina(char carros[][100], char consumo[100])
{
    int menor=consumo[0];
    int menor_posicao = 0;
    for(int i=0; i<=4; i++)
    {
        if(consumo[i] < menor_posicao)
        {
            menor = consumo[i];
            menor_posicao = i;
        }
    }
    printf("O modelo que menos gasta gasolina é o: %s", carros[menor_posicao]);
}
void Gasto(char a[5][100], char b[])
{
    float gasto=0;
    for(int k=0; k<=4; k++)
    {
        gasto = 1000 / (float) b[k];
        printf("Gasto por 1000Km do modelo %s: %.2f litros\n", a[k], gasto);
    }
}
int main() {
    char carros[100][100];
    char consumo[100];
   
    for(int i = 0; i<=4; i++)
    {
        printf("digite aqui o modelo do %dº carro: ", i+1);
        scanf("%s", &carros[i]);
    }
    for(int i = 0; i<=4; i++)
    {
        printf("digite aqui o consumo dos %dº veiculo: ", i+1);
        scanf("%d", &consumo[i]);
    }
   
   

    return 0;
}