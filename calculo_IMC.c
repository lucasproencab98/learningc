#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura;
    printf("-------CALCULO DE IMC-------\n\nDigite seu peso:\n");
     scanf("%f", &peso);
    printf("Digite sua altura:\n");
     scanf("%f", &altura);

    peso = peso / (altura * altura);

    if (peso < 18.5){
        printf("Abaixo do peso!\n");
    }
    else if( peso >= 18.5 && peso < 25){
        printf("Peso normal!");
    }
    else if(peso >= 25 && peso < 30){
        printf("Acima do peso!");
    }
    else if(peso >= 30){
        printf("Obeso!");
    }

    return 0;
}