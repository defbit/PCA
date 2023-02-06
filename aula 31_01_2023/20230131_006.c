#include <stdio.h>
#include <string.h>

int main() {
    char palavra[101];
    char invertida[101];
    
    printf("Digite aqui a palavra:");
    scanf("%101s", &palavra);

    for(int i=strlen(palavra); i>0; i--)
    {
        invertida[strlen(palavra) - i] = palavra[i - 1];
        
    }
    
    if(strcmp(palavra,invertida) == 0)
        {
            printf("Essa palavra é um palindromo\n");
            
        }else
        {
            printf("Essa palavra não é um palindromo\n");
        }
    return 0;
}
