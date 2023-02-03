#include <stdio.h>
#include <stdlib.h>

#define total 20
#define str_maxima 121

char nomes[total][str_maxima];
int qtd_nomes = 0;
char excluido;

void imprime_nomes(){
    for(int i=0; i<qtd_nomes; i++){
        printf("%d - %s\n", i+1, nomes[i]);
    }

}
void tira_nome(int indice){
    int i;
    while (qtd_nomes < str_maxima){
        if (strcmp(excluido, nomes[i] == 0)){
                printf(nomes[i+1] - excluido);
                return;
    }


int main(){
    while (qtd_nomes < str_maxima){
        printf("Digite o %dº nome da lista: ", qtd_nomes + 1);
        scanf("%s", nomes[qtd_nomes]);
        qtd_nomes++;
}
imprime_nomes();

 printf("Digite aqui um nome para retirá-lo da lista:");
 scanf("%s", &excluido);

tira_nome(excluido);

}
}
}

