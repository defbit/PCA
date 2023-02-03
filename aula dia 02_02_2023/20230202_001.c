#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encontrar_equipe(char nome[], char equipe[5][4][81]){
    for(int j=0; j<5; j++){
        for(int i=0; i<4; i++){
            if (strcmp(nome, equipe[j][i]) == 0){
                printf("Esse aluno é da equipe %d\n", j+1);
                return;
            }
        }
    }
    printf("Esse aluno não foi encontrado\n");
}

int main()
{
    char nome[81];
    char equipe[5][4][81];
    int i, j;

    for(j=0; j<5; j++){
        for(i=0; i<4; i++){
        printf("Integrante [%d] da equipe [%d]: ", i+1, j+1);
        scanf("%s", equipe[j][i]);
        }
    }
    printf("Digite um nome para encontrar o grupo: ");
    scanf("%s", nome);
    encontrar_equipe(nome, equipe);
    return 0;
}
