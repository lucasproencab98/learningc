#include <stdio.h>

int main() {
    int vetor[20], menor_posicao, auxiliar;
    printf("--------ORDENACAO POR SELECAO - SELECTION SORT-------\n");

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    //SELECTION SHORT//
    for (int i = 0; i < 19; i++) {
        menor_posicao = i;

        for (int j = i + 1; j < 20; j++) {
            if (vetor[j] < vetor[menor_posicao]) {
                menor_posicao = j;
            }
        }


        if (menor_posicao != i) {
            auxiliar = vetor[i];
            vetor[i] = vetor[menor_posicao];
            vetor[menor_posicao] = auxiliar;
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}