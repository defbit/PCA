#include <stdio.h>
#include <string.h>

/*isto é um comentario*/
int main()
{

    char nome[20];
    int idade;
    char sexo[2];
    fflush(stdin);
    printf("qual é o seu nome?\n");
    scanf("%s", &nome);
    fflush(stdin);

    printf("qual é a sua idade?\n");
    scanf("%d", &idade);
    fflush(stdin);

    printf("homem(H),mulher(M)?\n");
    scanf("%s", &sexo);
    fflush(stdin);

    if (strcmp(sexo, "H") == 0 || strcmp(sexo, "h") == 0)
    {
        printf("você é homem");
    }
    else
    {
        if (strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0)
        {
            printf("você é mulher");
        }
    }
    return 0;
}