#include <stdio.h>
 #include <string.h>
 #include <ctype.h>

void inverter_palavra(char palavra[20])
{
    for(int i=strlen(palavra); i>0; i--)
    {
        printf("%c", palavra[i-1]);
    }
}
void tira_vogais(char palavra[20])
{
    for(int i=0; i<strlen(palavra); i++)
    {
        if((palavra[i] != 'A') && (palavra[i] != 'a')&& (palavra[i] != 'E') && (palavra[i] != 'e') && (palavra[i] != 'I') && (palavra[i] != 'i') && (palavra[i] != 'O') && (palavra[i] !='o') && (palavra[i] != 'U') && (palavra[i] != 'u'))
        {
            printf("%c", palavra[i]);
        }
    }
}
void transformar_maiusculas(char palavra[20])
{
    for(int i=0; i<strlen(palavra); i++)
    {
        printf("%c", toupper(palavra[i]));
    }
}
void procurar_caractere(char palavra[20], char c)
{
    int cont=0;

    for(int i=0; i<strlen(palavra); i++)
    {
        if (palavra[i] == c){
            cont++;
        }
    }
    printf("O caractere '%c' apareceu %d vezes na palavra", c, cont);
}

void excluir_caractere(char palavra[20], char c)
{
    for(int i=0; i<strlen(palavra); i++)
    {
        if (palavra[i] != c){
            printf("%c", palavra[i]);
        }
    }
}
int main() {
    char palavra[20];
    char c;
   
    printf("Digite aqui a palavra:");
    scanf("%s", &palavra);
    printf("Digite aqui o caractere:");
    scanf(" %c", &c);
   
    inverter_palavra(palavra);
    printf("\n");
    tira_vogais(palavra);
    printf("\n");
    transformar_maiusculas(palavra);
    printf("\n");
    procurar_caractere(palavra, c);
    printf("\n");
    excluir_caractere(palavra, c);

    return 0;
}