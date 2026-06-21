#include <stdio.h>
#include <stdbool.h>

int main(){

    int matriz_viagem[7][7] = {
        {0, 2, 11, 6, 15, 11, 1},
        {2, 0, 7, 12, 4, 2, 15},
        {11, 7, 0, 11, 8, 3, 13},
        {6, 12, 11, 0, 10, 2, 1},
        {15, 4, 8, 10, 0, 5, 13},
        {11, 2, 3, 2, 5, 0, 14},
        {1, 15, 13, 1, 13, 14, 0},
    };
    int entrada=0, saida=0;

    printf("----------calculadora de tempo de viagem----------\n\nSorocaba - 1\nSao Paulo - 2\nSao Roque - 3\nItapetininga - 4\nAluminio - 5\nIndaiatuba - 6\nItaquaquecetuba - 7\n\nPara sair digite a mesma cidade na origem e destino\n");

    do{
    printf("Digite a cidade origem\n");
    scanf("%d", &entrada);
    printf("Digite a cidade destino\n");
    scanf("%d", &saida);

    if (entrada != saida) {
        printf("O tempo de viagem entre as cidades escolhidas e %d\n\n", matriz_viagem[entrada-1][saida-1]);
    } 
    else {
        printf("\nSaindo do programa...\n");
    }
    }while(entrada != saida);
    
    return 0;
}
