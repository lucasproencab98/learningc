#include <stdio.h>

int main() {
    int A, B, C, temp;

    printf("Digite o primeiro valor inteiro:\n");
     scanf ("%d", &A);
    printf("Digite o segundo valor inteiro:\n");
     scanf ("%d", &B);
    printf("Digite o terceiro valor inteiro:\n");
     scanf ("%d", &C);

    // Coloca o maior em A
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A < C) {
        temp = A;
        A = C;
        C = temp;
    }

    // Ajusta B e C
    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("Os valores em ordem decrescente sao: %d %d %d\n", A, B, C);

    return 0;
}
