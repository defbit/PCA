// Online C compiler to run C program online
#include <stdio.h>

void acrescentar_ponto_alunas(float notas[], char sexos[], int num_alunas) {
    for (int i = 0; i < num_alunas; i++) {
        if (sexos[i] == 'F') {
            notas[i]++;
        }
    }
}

int main() {
    char nomes[2][6][20] = {
    {"Ana", "Bianca", "Clara", "Daniela", "Evelyn", "Fabiana"},
    {"Gabriel", "Henrique", "João", "Lucas", "Miguel", "Pedro"}
};


char sexo[2][6] = {
    {'F', 'F', 'F', 'F', 'F', 'F'},
    {'M', 'M', 'M', 'M', 'M', 'M'}
};


float notas[2][6] = {
    {9.5, 7.0, 8.5, 6.5, 9.0, 7.5},
    {8.0, 6.5, 7.5, 8.5, 6.0, 9.0}
    

int mulheres_equipe1 = 0, mulheres_equipe2 = 0;
    for (int i = 0; i < 6; i++) {
        if (sexo[0][i] == 'F') {
            mulheres_equipe1++;
    }
    if (sexo[1][i] == 'F') {
        mulheres_equipe2++;
    }
}

    if (mulheres_equipe1 > mulheres_equipe2) {
        printf("A equipe 1 tem mais mulheres.\n");
} 
    else if (mulheres_equipe2 > mulheres_equipe1) {
        printf("A equipe 2 tem mais mulheres.\n");
} 
    else {
        printf("As equipes tem a mesma quantidade de mulheres.\n");
}
char alunas_selecionadas[12][20];
int num_alunas_selecionadas = 0;

void acrescentar_ponto_alunas(float notas[], char sexos[], int num_alunas) {
    for (int i = 0; i < num_alunas; i++) {
        if (sexos[i] == 'F') {
            notas[i]++;
        }
    }
}
    for (int equipe = 0; equipe < 2; equipe++) {
        for (int aluno = 0; aluno < 6; aluno++) {
            if (sexo[equipe][aluno] == 'F' && notas[equipe][aluno] >= 8.0) {
            strcpy(alunas_selecionadas[num_alunas_selecionadas], nomes[equipe][aluno]);
                num_alunas_selecionadas++;
        }
    }
}

printf("As seguintes alunas podem participar do projeto:\n");
    for (int i = 0; i < num_alunas_selecionadas; i++) {
        printf("%s\n", alunas_selecionadas[i]);
}

    acrescentar_ponto_alunas(notas_equipe2, sexos_equipe2, num_alunas_equipe2);

void adicionar_aluno(char nomes[], char sexos[], float notas[], int* num_alunos, int max_alunos) {
    
    printf("Digite o nome do novo aluno: ");
    scanf("%s", nomes + (*num_alunos * TAM_NOME));

    printf("Digite o sexo do novo aluno (M/F): ");
    scanf(" %c", &sexos[*num_alunos]);

    printf("Digite a nota final do novo aluno: ");
    scanf("%f", &notas[*num_alunos]);

    (*num_alunos)++;
}

    adicionar_aluno(nomes_equipe1, sexos_equipe1, notas_equipe1, &num_alunas_equipe1, MAX_ALUNOS);


    return 0;
}