#include <stdio.h>
#include <string.h>

void conta_alunas(char sexo[2][7][1]){
    int mulheres_1 = 0, mulheres_2 = 0;
    
    for(int i=0; i<6; i++){
        if(sexo[0][0][i] == 'f'){
            mulheres_1 += 1;
            
        }
    }
    for(int i=0; i<6; i++){
        if(sexo[1][0][i] == 'f'){
            mulheres_2 += 1;
        }
    }
    if(mulheres_1 > mulheres_2){
        printf("maior quantidade de mulheres: grupo 1\n");
    }
    else{
        printf("maior quantidade de mulheres: grupo 2\n");
    }
}

void selecionadas(char estudantes[2][7][20], char sexo[2][7][1], float notas[2][7][1]){
    char alunas_selecionadas[2][6][120];
    printf("selecionadas da equipe 1 p/ projeto: \n");
    for(int i=0; i<6; i++){
        if(sexo[0][0][i] == 'f' && notas[0][0][i] >= 8.0){
            strcpy(alunas_selecionadas[0][i], estudantes[0][i]);
            printf("%s ", alunas_selecionadas);
        }
    }
    printf("\n");
    
    printf("selecionadas da equipe 2 p/ projeto:: \n");
    for(int i=0; i<6; i++){
        if(sexo[1][0][i] == 'f' && notas[1][0][i] >= 8.0){
            strcpy(alunas_selecionadas[1][i], estudantes[1][i]);
            printf("%s ", alunas_selecionadas);
        }
    }
    printf("\n");
}

void ponto_extra(char estudantes[2][7][20], float notas[2][7][1]){
    printf("Novas notas: \n");
    for(int i=0; i<6; i++){
        if(notas[1][0][i] < 10){
            notas[1][0][i] += 1;
        }
        printf("%s: %.1f\n", estudantes[1][i], notas[1][0][i]);
    }
}

void aluno_novo(char estudantes[2][7][20], char sexo[2][7][1], float notas[2][7][1]){
    char novo_est[20];
    char novo_sexo;
    float nova_nota;
    int equipe;

    printf("nome do estudante: ");
    scanf("%s", novo_est);
    printf("sexo do estudante: ");
    scanf(" %c", &novo_sexo);
    printf("nota do estudante: ");
    scanf("%f", &nova_nota);
    printf("selecione a equipe (1 ou 2): ");
    scanf("%d", &equipe);
    printf("\n");

    strcpy(estudantes[equipe-1][6], novo_est);
    sexo[equipe-1][0][6] = novo_sexo;
    notas[equipe-1][0][6] = nova_nota;
    
    printf("Nova formação da equipe %d:\n", equipe);
    for(int i=0; i<7; i++){
        printf("%s (%c): %.1f\n", estudantes[equipe-1][i], sexo[equipe-1][0][i], notas[equipe-1][0][i]);
    }
    
}

int main() {
    char estudantes[2][7][20] = {
        {"carla", "helena", "Iana", "Pedro", "Julio", "Marcia", ""},{"Carlos", "lua", "Selina", "paulo", "Alex", "felipe", ""}
    };
    char sexo[2][7][1] = {
        {'f', 'f', 'f', 'm', 'm', 'f', 'n'},{'m', 'f', 'f', 'm', 'm', 'm', 'n'}
    };
    float notas[2][7][1] = {
        {10, 8, 3, 4, 6, 5, 0},{2, 8, 8, 6, 4, 3, 0}
    };
    
    conta_alunas(sexo);
    printf("\n");
    selecionadas(estudantes, sexo, notas);
    printf("\n");
    ponto_extra(estudantes, notas);
    printf("\n");
    aluno_novo(estudantes, sexo, notas);

    return 0;
}
