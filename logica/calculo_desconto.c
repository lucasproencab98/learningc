#include <stdio.h>
#include <math.h>

int main(){
    float valor_produto;
    int cond_pagamento;
    printf("Informe o valor do produto:\n");
    scanf("%f", &valor_produto);
    printf("Escolha a condição de pagamento:\n");
    printf("1 - a vista em dinheiro ou cheque, recebe 10 por cento de desconto\n");
    printf("2 - a vista no cartao de credito, recebe 5 por cento de desconto\n");
    printf("3 - em duas vezes, preco normal sem juros\n");
    printf("4 - em tres vezes, preco normal + juros de 10 por cento\n");
    scanf(" %d", &cond_pagamento);

    switch(cond_pagamento){
        case (1):
            valor_produto = valor_produto - (valor_produto * 0.10);
            printf("Valor a ser pago: %.2f\n", valor_produto);
            break;
        case (2):
            valor_produto = valor_produto - (valor_produto * 0.05);
            printf("Valor a ser pago: %.2f\n", valor_produto);
            break;
        case (3): 
            printf("Valor a ser pago: %.2f\n", valor_produto);
            break;
        case (4):
            valor_produto = valor_produto + (valor_produto * 0.10);
             printf("Valor a ser pago: %.2f\n", valor_produto);
             break;
        default:
            printf("Opcao Invalida!");
    }
    return 0;
}
