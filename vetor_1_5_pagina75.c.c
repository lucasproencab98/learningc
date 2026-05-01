#include <stdio.h>

int main() {
    int vetor[20], auxiliar;
    printf("-------- ORDENACAO POR BOLHAS - BUBBLE SORT --------\n");

    // ENTRADA
    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    //BUBBLE SORT//
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {

            // Se o elemento da esquerda for maior que o da direita, eles trocam//
            if (vetor[j] > vetor[j + 1]) {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}