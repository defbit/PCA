#include <stdio.h>
#include <string.h> 

void interseccao(char conjunto_a[], char conjunto_b[], int tamanho) { 
    char numeros_iguais[100];
    int contador = 0;
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) { 
            if(conjunto_a[i] == conjunto_b[j]) { 
                int k;
                for(k = 0; k < contador; k++) { 
                    if(conjunto_a[i] == numeros_iguais[k]) {
                        break;
                    }
                }
                if(k == contador) { 
                    numeros_iguais[contador] = conjunto_a[i];
                    contador++;
                }
            }
        }
    }
    printf("A intercção dos conjuntos A e B é: ");
    for(int i = 0; i < contador; i++) {
        printf("%c ", numeros_iguais[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;
    char conjunto_a[100];
    char conjunto_b[100];
    
    printf("Digite aqui o tamanho dos conjuntos: ");
    scanf("%d", &tamanho);
    
    printf("Digite aqui os elementos do conjunto A:\n");
    for(int i = 0; i < tamanho; i++) {
        scanf(" %c", &conjunto_a[i]);
    }
    printf("\n");
    
    printf("Digite aqui os elementos do conjunto B:\n");
    for(int i = 0; i < tamanho; i++) {
        scanf(" %c", &conjunto_b[i]);
    }
    
    interseccao(conjunto_a, conjunto_b, tamanho); 

    return 0;
}
