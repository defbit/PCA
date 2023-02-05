#include <stdio.h>
#include <string.h>

int main() {
    char s1[21];
    char s2[21];
    int len1;
    int len2;
    int comparacao;
    int cont = 0;
    char caractere;
   
    printf("Digite a string S1:");
    scanf("%s", &s1);
    printf("Digite a string S2:");
    scanf("%s", &s2);
    printf("Digite o caractere a ser procurado:");
    scanf(" %c", &caractere);
   
    len1 = strlen(s1);
    len2 = strlen(s2);
   
    printf("O tamanho da string S1 é: %d", len1);
    printf("\n");
    printf("O tamanho da string S2 é: %d", len2);
    printf("\n");
   
    comparacao = strcmp(s1,s2);
   
    if(comparacao == 0)
    {
        printf("As strings são iguais.");
    }
    else
    {
        printf("As strings não são iguais.");
        printf("\n");
    }
   
    strcat(s1, s2);
    printf("O resultado da concatenação das strings S1 e S2 é: %s", s1);
     printf("\n");
   
   
    printf("O resultado da string S1 invertida é:");
    for(int i=strlen(s1); i>0; i--)
    {
         printf("%c", s1[i-1]);
    }
   
    for(int i=0; i<strlen(s1); i++)
    {
       if(s1[i] == caractere)
       {
          cont++;
       }
    }
    printf("\n");
    printf("O caractere '%c' aparece %d vezes na string.", caractere, cont);
    return 0;
}