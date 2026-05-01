#include <stdio.h>
#include <math.h> 

int main() {

    float a1, a2, b1, b2, resultado;

    printf("-------CALCULANDO A DISTANCIA ENTRE DOIS PONTOS DO PLANO-------\n");

    //Entrada de dados para o Ponto A//
    printf("Digite o ponto A (ex: 1 2): ");
    scanf("%f %f", &a1, &b1);

    //Entrada de dados para o Ponto B//
    printf("Digite o ponto B (ex: 1 2): ");
    scanf("%f %f", &a2, &b2);

    //Cálculo da distância usando a fórmula de Pitágoras//
    //sqrt = raiz quadrada | pow = potência//
    resultado = sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));

    //Exibição do resultado com 2 casas decimais//
    printf("A distancia entre estes dois pontos e: {%.2f}\n", resultado);

    return 0;
}
