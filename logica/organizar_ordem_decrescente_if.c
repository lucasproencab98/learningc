#include <stdio.h>

//FORMA MAIS DIFICIL POIS PRECISA COLOCAR TODAS AS POSSIBILIDADES DE FORMA MANUAL//
int main(){
    int A, B, C;
    printf("Digite o primeiro valor inteiro:\n");
     scanf ("%d", &A);
    printf("Digite o segundo valor inteiro:\n");
     scanf ("%d", &B);
    printf("Digite o terceiro valor inteiro:\n");
     scanf ("%d", &C);

    // Caso 1: A >= B >= C
    if (A >= B && B >= C) {
        printf("%d %d %d", A, B, C);
    }
    // Caso 2: A >= C >= B
    else if (A >= C && C >= B) {
        printf("%d %d %d", A, C, B);
    }
    // Caso 3: B >= A && A >= C
    else if (B >= A && A >= C) {
        printf("%d %d %d", B, A, C);
    }
    // Caso 4: B >= C && C >= A
    else if (B >= C && C >= A) {
        printf("%d %d %dv", B, C, A);
    }
    // Caso 5: C >= A && A >= B
    else if (C >= A && A >= B) {
        printf("%d %d %d", C, A, B);
    }
    // Caso 6: C >= B && B >= A
    else if (C >= B && B >= A) {
        printf("%d %d %d", C, B, A);
    }
    printf("\n");
    return 0;
}
