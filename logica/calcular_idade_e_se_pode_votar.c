#include <stdio.h>

int main(){
    int nasc;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &nasc);
    nasc = 2026 - nasc;
    printf("Sua idade e: %d anos!\n", nasc);
    if (nasc >= 16 && nasc >= 18){
        printf("Voce ja pode votar!\nVoce ja pode tirar CNH!\n");
    }
    else if (nasc >= 16 && nasc < 18 ){
        printf("Voce ja pode votar!\nVoce ainda nao pode tirar CNH!\n");
    }
    else if (nasc < 16 && nasc >= 18 ){
         printf("Voce ainda nao pode votar!\nVoce ja pode tirar CNH!\n");
    }
    else{
         printf("Voce ainda nao pode votar!\nVoce ainda nao pode tirar CNH!\n");
    }
    return 0;
}
