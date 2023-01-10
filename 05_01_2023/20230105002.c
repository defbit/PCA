#include <stdio.h>
#include <stdlib.h>

float prontuario, peso;
int semanas, diagnostico, mes;



int main()
{
    float prontuario(){
    printf("Digite aqui o peso: ");
    scanf("%f", &peso);
    printf("Digite aqui as semanas: ");
    scanf("%d", &semanas);
    return 0;
}

int diagnostico(){
    if (peso<100 || semanas <28){
    printf("Parto não deverá ser realizado, reavaliar clinicamente");
    exit;
    }else {
    mes = semanas/4;
    if(peso > 2500 && mes > 7){
        printf("Parto normal");
    }if(peso > 2500 && mes <= 7){
        printf("Parto Cesariana");
    }if (1500< peso <2000 && mes > 9){
        printf("parto normal");
    }else{
        printf("Parto Cesariana");
    }
}
}
prontuario();
diagnostico();
}




