#include <stdio.h>

int main()
{
    char msg[101];
    int deslocamento = 3;
    int i;
   
    printf("Digite a mensagem a ser codificada:");
    scanf("%s", &msg);
   
    for(i=0; i<101; i++)
    {
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = (msg[i] + deslocamento);
        }else if (msg[i] >= 'A' && msg[i] <= 'Z')
        {
            msg[i] = (msg[i] + deslocamento);
        }
    }
    printf("Mensagem codificada: %s\n", msg);
    return 0;
}