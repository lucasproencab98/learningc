#include <stdio.h>
#include <windows.h> // Necessário para Sleep()
/*algoritmo que realiza contagem regressiva de 10 minutos*/
int main(){
    int minutos=10, segundos=0;
    printf("-----Contagem regressiva de 10 minutos-----\n");
    printf("\r%02d : %02d", minutos, segundos);
     fflush(stdout);
     Sleep(900);
    for(minutos= 9; minutos >=0; minutos--){
        for(segundos=59; segundos>= 0;segundos--){
            printf("\r%02d : %02d", minutos, segundos);//\r limpa e escreve na mesma linha
            fflush(stdout);
            Sleep(1000);
        }
    }
    printf("\nTempo esgotado!\n");
    return 0;
}