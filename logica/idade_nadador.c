#include <stdio.h>
#include <math.h>

int main(){
    int idade;
    printf("Informe a idade do nadador:\n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("Infantil A!\n");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Infantil B!\n");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Juvenil A!\n");
    }
    else if (idade >= 14 && idade <= 17){
        printf("Juvenil B!\n");
    }
    else if (idade >= 18){
        printf("Adulto!\n");
    }
    return 0;
}
