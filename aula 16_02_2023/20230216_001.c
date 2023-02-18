#include <stdio.h>

int main() {
    char Goleiro[3][10] = {"hugo", "matheus", "santos"};
    int pts_goleiro[3] = {10, 3, 8};
    char Defensa[7][10] = {"rodigo", "leo", "david", "cleiton", "fabricio", "pablo", "joão"};
    int pts_defesa[7] = {5, 10, 8, 3, 9, 5, 7};
    char Meio_campo[8][10] = {"everton", "arrascaeta", "vitor", "hugo", "mateus", "frança", "pedro", "marinho"};
    int pts_meio_campo[8] = {3, 6, 7, 8, 2, 10, 2, 7};
    char Atacante[5][10] = {"Arthur", "thiago", "jose", "jefferson", "luiz"};
    int pts_atacantes[5] = {6, 9, 2, 7, 10};
    
    int max_goleiro = 0;
    int max_defesa = 0;
    int max_meio_campo = 0;
    int max_atacante = 0;

    for (int i = 0; i < 3; i++) {
        if (pts_goleiro[i] > max_goleiro) {
            max_goleiro = pts_goleiro[i];
        }
    }
    for (int i = 0; i < 7; i++) {
        if (pts_defesa[i] > max_defesa) {
            max_defesa = pts_defesa[i];
        }
    }
    for (int i = 0; i < 8; i++) {
        if (pts_meio_campo[i] > max_meio_campo) {
            max_meio_campo = pts_meio_campo[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (pts_atacantes[i] > max_atacante) {
            max_atacante = pts_atacantes[i];
        }
    }

    printf("O goleiro com a maior pontuação é: ");
    for (int i = 0; i < 3; i++) {
        if (pts_goleiro[i] == max_goleiro) {
            printf("%s ", Goleiro[i]);
        }
    }
    printf("\n");

    printf("O defensor com a maior pontuação: ");
    for (int i = 0; i < 7; i++) {
        if (pts_defesa[i] == max_defesa) {
            printf("%s ", Defensa[i]);
        }
    }
    printf("\n");

    printf("O meio-campo com a maior pontuação: ");
    for (int i = 0; i < 8; i++) {
        if (pts_meio_campo[i] == max_meio_campo) {
            printf("%s ", Meio_campo[i]);
        }
    }
    printf("\n");
    
     printf("O atacante com a maior pontuação: ");
    for (int i = 0; i < 5; i++) {
        if (pts_atacantes[i] == max_atacante) {
            printf("%s ", Atacante[i]);
        }
    }}
