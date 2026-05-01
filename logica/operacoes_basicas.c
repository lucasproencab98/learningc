#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    char op;
    printf("Digite o primeiro numero:\n");
     scanf(" %f", &a);
    printf("Digite o operador da conta a ser executada: + - / *\n");
     scanf(" %c", &op);
    printf("Digite o segundo numero:\n");
     scanf(" %f", &b);

    switch (op){
        case ('+'):
            a = a + b;
            printf("resultado %.2f\n", a);
            break;
        case ('-'):
            a = a - b;
            printf("resultado %.2f\n", a);
            break;
        case ('/'):
            a = a / b;
            printf("resultado %.2f\n", a);
            break;
        case ('*'):
            a = a * b;
            printf("resultado %.2f\n", a);
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}
