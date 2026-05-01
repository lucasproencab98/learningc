#include <stdio.h>
#include <stdbool.h>
/*PROGRAMA QUE ARMAZENA VALORES EM DOIS VETORES DE 5 POSIÇÕES E CALCULA AS OPERAÇÕES
ARMAZENADAS EM OUTRO VETOR DE 5 POSIÇÕES*/
int main() {
    int vetor1[5], vetor2[5], vetor3[5];
    char vetor[5];
    printf("-------CALCULADORA COM VETOR DE 5 POSICOES-------\n");

    for (int a = 0; a < 5; a++) {
        printf("Digite o primeiro valor a ser armazenado na posicao %d do vetor numero 1\n", a+1);
        scanf(" %d", &vetor1[a]);

        printf("Digite o tipo de conta a ser realizada:\nAdicao +\nSubtracao -\nDivisao /nMultiplicacao *\n");
        scanf(" %c", &vetor[a]);

        printf("Digite o segundo valor a ser armazenado na posicao %d do vetor numero 2\n", a+1);
        scanf(" %d", &vetor2[a]);

        switch (vetor[a]) {
            case '+':
                vetor3[a] = vetor1[a] + vetor2[a];
                break;
            case '-':
                vetor3[a] = vetor1[a] - vetor2[a];
                break;
            case '/':
                if (vetor2[a] == 0) {
                    printf("Impossivel divisao por zero!\n");
                }
                else {
                    vetor3[a] = vetor1[a] / vetor2[a];
                }
                break;
            case '*':
                vetor3[a] = vetor1[a] * vetor2[a];
                break;
            default:
                printf("Nenhuma conta valida escolhida!\n");
        }
    }

    for (int a = 0; a < 5; a++) {
        printf("Operacao numero %d\n%d %c %d = %d\n", a+1, vetor1[a], vetor[a], vetor2[a], vetor3[a]);
    }

    return 0;
}