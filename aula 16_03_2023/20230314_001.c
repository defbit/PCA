#include <stdio.h>
#include <math.h>

void mediaDesvio(int *vetor, int n, float *m, float *dp){
    int i;
    *m = 0.0;
    for(i=0; i<n; i++){
        *m = *m + vetor[i];
    }
    *m = *m/n;
    *dp = 0.0;
    for(i=0; i<n; i++){
        *dp = *dp + pow(vetor[i] - *m, 2.0);
    }
    *dp = sqrt(*dp/(n-1));
}

int main() {
    int num_alunos;
    printf("Digite aqui a quantidade de alunos: ");
    scanf("%d", &num_alunos);
    int notas[num_alunos];
    
    for(int i=0; i<num_alunos; i++ ){
        printf("Digite aqui as notas: ");
        scanf("%d", &notas[i]);
    }
    float media, desvio;
    mediaDesvio(notas, num_alunos, &media, &desvio);
    printf(" A media nas notas eh: %.2f\n", media);
    printf("O desvio padrao das notas eh %.2f", desvio);
    return 0;
}