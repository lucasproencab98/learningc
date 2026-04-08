#include <stdio.h>
#include <math.h> 

int main() {
    float vara, varb, varc, delta;
    
    printf("----------CALCULANDO EQUAÇÃO DO 2º GRAU----------\n");
    printf("Digite o valor A, sendo A coeficiente de x^2:\n");
    scanf("%f", &vara);

    printf("Digite o valor B, sendo B coeficiente de x:\n");
    scanf("%f", &varb);

    printf("Digite o valor C, sendo C termo independente:\n");
    scanf("%f", &varc);

    // Cálculo do Delta//
    delta = (varb * varb) - (4 * vara * varc);

    if (delta > 0) {
        // sqrt() é a função para raiz quadrada em C//
		float raizquad, resultado1, resultado2;
        raizquad = sqrt(delta);

        resultado1 = ((-varb) + raizquad) / (2 * vara);
        resultado2 = ((-varb) - raizquad) / (2 * vara);

        printf("\nEsta equacao tem duas raizes reais.\n");
        printf("Solucao: {%.2f, %.2f}\n", resultado1, resultado2);
    } 
    else if (delta == 0) {
        float resultado = (-varb) / (2 * vara);
        printf("\nEsta equacao tem somente uma raiz real.\n");
        printf("Solucao: {%.2f}\n", resultado);
    } 
    else {
        printf("\nEsta equacao nao tem raiz real.\n");
        printf("Solucao: {VAZIO}\n");
    }

    return 0;
}