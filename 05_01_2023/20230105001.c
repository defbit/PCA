#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo, percentual, absdif;
int varIntA, varIntB;


int main(){
    int scanIntIntervalo() {
        if (varIntA < 0 || varIntA > 1000){
            varIntA = NULL;
        }else if (varIntB < 0 || varIntB > 1000){
            varIntB = NULL;
        }

        if (varIntA == NULL && varIntB == NULL){
            printf("Digite aqui um valor (A): ");
            scanf("%d", &varIntA);
        }else if(varIntA != NULL && varIntB == NULL){
            printf("Digite aqui um valor (B): ");
            scanf("%d", &varIntB);
        }
        return 0;
    }

    do{
        printf("Loop A\n");
        scanIntIntervalo();
    }while(varIntA < 0 || varIntA > 1001);

    do{
        printf("Loop B\n");
        scanIntIntervalo();
    }while(varIntB < 0 || varIntB > 1001);

    printf("Valor A = %d \n", varIntA);
    printf("Valor B = %d \n", varIntB);

}





