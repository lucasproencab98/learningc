#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, delta;

    printf("Digite o primeiro valor :\n");
     scanf ("%f", &A);
    printf("Digite o primeiro valor :\n");
     scanf ("%f", &B);
     printf("Digite o primeiro valor :\n");
     scanf ("%f", &C);

     delta = (B * B) - (4 * A * C);

     if (delta > 0 ){
        float raiz = sqrt(delta);
        float x1, x2;
        x1 = (-B + raiz) / (2 * A);
        x2 = (-B - raiz) / (2 * A);
        printf("S = {%.2f, %.2f}", x1, x2);
     }
     else{
        printf("Os valores digitados não correspondem a uma equação do 2º Grau com duas raízes reais!\n");
     }
    return 0;
}
