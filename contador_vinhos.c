#include <stdio.h>

int main() {
    char tipo_vinho;
    int cont_vinhos = 0, cont_tinto = 0, cont_branco = 0, cont_rose = 0;
    float porc_tinto = 0, porc_branco = 0, porc_rose = 0;
    printf("-------CONTADOR DE VINHO-------\n");
    do {
        printf("Digite o tipo de vinho\nT = tinto\nB = branco\nR = rose\nqualquer outra tecla = sair\n");
        scanf(" %c", &tipo_vinho); 
        switch (tipo_vinho) {
            case 'T': case 't': // Aceita maiúsculo ou minúsculo
                cont_tinto++;
                cont_vinhos++;
                break;
            case 'B': case 'b':
                cont_branco++;
                cont_vinhos++;
                break;
            case 'R': case 'r':
                cont_rose++;
                cont_vinhos++;
                break;
            default:
                printf("Encerrando...\n");
                break;
        }
    } while ((tipo_vinho == 'T' && tipo_vinho != 't') || (tipo_vinho == 'B' && tipo_vinho != 'b') || (tipo_vinho == 'R' && tipo_vinho != 'r'));

    if (cont_vinhos > 0) {
        porc_tinto = (cont_tinto * 100.0) / cont_vinhos;
        porc_branco = (cont_branco * 100.0) / cont_vinhos;
        porc_rose = (cont_rose * 100.0) / cont_vinhos;
        printf("\nTotal de vinhos: %d\n", cont_vinhos);
        printf("Porcentagem de tintos: %.2f%%\n", porc_tinto);
        printf("Porcentagem de brancos: %.2f%%\n", porc_branco);
        printf("Porcentagem de roses: %.2f%%\n", porc_rose);
    } else {
        printf("Nenhum vinho fornecido\n");
    }
    return 0;
}