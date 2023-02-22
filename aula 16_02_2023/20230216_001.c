#include <stdio.h>

int main() {
    char Goleiro[3][10] = {"hugo", "matheus", "santos"};
    int pts_goleiro[3] = {10, 3, 8};
    char Defensa[7][10] = {"david", "leo", "rodrigo", "cleiton", "fabricio", "pablo", "joão"};
    int pts_defesa[7] = {5, 10, 8, 3, 9, 5, 7};
    char Meio_campo[8][10] = {"everton", "arrascaeta", "vitor", "hugo", "mateus", "frança", "pedro", "marinho"};
    int pts_meio_campo[8] = {3, 6, 7, 8, 2, 10, 2, 7};
    char Atacante[5][10] = {"Arthur", "thiago", "jose", "jefferson", "luiz"};
    int pts_atacantes[5] = {6, 9, 2, 7, 10};
    
    int max_goleiro = 0;
    int max_defesa = 0;
    int max_meio_campo = 0;
    int max_atacante = 0;

    
// Encontre o índice do goleiro com a maior pontuação
int indice_goleiro = 0;
for (int i = 1; i < 3; i++) {
    if (pts_goleiro[i] > pts_goleiro[indice_goleiro]) {
        indice_goleiro = i;
    }
}

// Encontre os índices dos 4 defesas com a maior pontuação
int indices_defesa[4];
for (int i = 0; i < 7; i++) {
    if (pts_defesa[i] > pts_defesa[indices_defesa[0]]) {
        indices_defesa[0] = i;
    } else if (pts_defesa[i] > pts_defesa[indices_defesa[1]]) {
        indices_defesa[1] = i;
    } else if (pts_defesa[i] > pts_defesa[indices_defesa[2]]) {
        indices_defesa[2] = i;
    } else if (pts_defesa[i] > pts_defesa[indices_defesa[3]]) {
        indices_defesa[3] = i;
    }
}

// Encontre os índices dos 4 meio-campistas com a maior pontuação
int indices_meio_campo[4];
for (int i = 0; i < 8; i++) {
    if (pts_meio_campo[i] > pts_meio_campo[indices_meio_campo[0]]) {
        indices_meio_campo[0] = i;
    } else if (pts_meio_campo[i] > pts_meio_campo[indices_meio_campo[1]]) {
        indices_meio_campo[1] = i;
    } else if (pts_meio_campo[i] > pts_meio_campo[indices_meio_campo[2]]) {
        indices_meio_campo[2] = i;
    } else if (pts_meio_campo[i] > pts_meio_campo[indices_meio_campo[3]]) {
        indices_meio_campo[3] = i;
    }
}

// Encontre os índices dos 2 atacantes com a maior pontuação
int indices_atacante[2];
for (int i = 0; i < 5; i++) {
    if (pts_atacantes[i] > pts_atacantes[indices_atacante[0]]) {
        indices_atacante[0] = i;
    } else if (pts_atacantes[i] > pts_atacantes[indices_atacante[1]]) {
        indices_atacante[1] = i;
    }
}

// Imprima a escalação com os jogadores selecionados
printf("Escalação:\n");
printf("Goleiro: %s\n", Goleiro[indice_goleiro]);
printf("Defesa: %s, %s, %s, %s\n", Defensa[indices_defesa[0]], Defensa[indices_defesa[1]], Defensa[indices_defesa[2]], Defensa[indices_defesa[3]]);
printf("Meio-campo: %s, %s, %s, %s\n", Meio_campo[indices_meio_campo[0]], Meio_campo[indices_meio_campo[1]], Meio_campo[indices_meio_campo[2]], Meio_campo[indices_meio_campo[3]]);
printf("Atacantes:%s,%s", Atacante[indices_atacante[0]], Atacante[indices_atacante[1]]);
return 0;
}
