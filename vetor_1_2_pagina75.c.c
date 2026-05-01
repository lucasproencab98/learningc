#include <stdio.h>
#include <stdbool.h>
/*PROGRAMA QUE ARMAZENA VALORES EM DOIS VETORES DE 5 POSIÇÕES E CALCULA AS OPERAÇÕES
ARMAZENADAS EM OUTRO VETOR DE 5 POSIÇÕES
O VETOR1 É LIDO DA POSIÇÃO 0 ATE A POSIÇÃO 4
O VETOR2 É LIDO DA POISÇÃO 4 ATE A POSIÇÃO 0
E O ARMAZENAMENTO SE DA NO VETOR3 DO CENTRO PARA AS BORDAS0*/

int main() {
    int vetor1[5], vetor2[5], vetor3[5], tamanho_vetor = 5, centro_vetor = tamanho_vetor / 2;
    char vetor[5];
    printf("-------CALCULADORA COM VETOR DE 5 POSICOES-------\n");

    for (int a = 0; a < tamanho_vetor; a++) {
        printf("Digite o primeiro valor a ser armazenado na posicao %d do vetor numero 1\n", a+1);
        scanf(" %d", &vetor1[a]);

        printf("Digite o tipo de conta a ser realizada:\nAdicao +\nSubtracao -\nDivisao /nMultiplicacao *\n");
        scanf(" %c", &vetor[a]);

        printf("Digite o segundo valor a ser armazenado na posicao %d do vetor numero 2\n", a+1);
        scanf(" %d", &vetor2[a]);
    }
    for (int a = 0; a < tamanho_vetor; a++) {
        int b = (tamanho_vetor - 1) - a;
        int controle;
        if (a == 0) {
           controle = centro_vetor;
        }
        else if (a % 2 == 0) {
            controle = centro_vetor - (a / 2 + 1);
        }
        else {
            controle = centro_vetor - (a / 2 );
        }
        switch (vetor[a]) {
            case '+':
                vetor3[controle] = vetor1[a] + vetor2[b];
                break;
            case '-':
                vetor3[controle] = vetor1[a] - vetor2[b];
                break;
            case '/':
                if (vetor2[b] == 0) {
                    printf("Impossivel divisao por zero!\n");
                }
                else {
                    vetor3[controle] = vetor1[a] / vetor2[b];
                }
                break;
            case '*':
                vetor3[controle] = vetor1[a] * vetor2[b];
                break;
            default:
                printf("Nenhuma conta valida escolhida!\n");
        }
    }
    for (int a = 0; a < tamanho_vetor; a++) {
        int b = (tamanho_vetor - 1) - a;
        printf("Operacao numero %d\n%d %c %d = %d\n", a+1, vetor1[a], vetor[a], vetor2[b], vetor3[a]);
    }

    return 0;
}