#include <stdio.h>
#include <math.h>

int main(){
    int codigo;
    printf("Digite o codigo do produto:\n");
    scanf("%d", &codigo);
    if (codigo == 1){
        printf("Alimento nao perecivel\n");
    }
    else if(codigo == 2 || codigo == 3 || codigo == 4){
        printf("Alimento perecivel\n");
    }
    else if(codigo == 5 || codigo == 6){
        printf("Vestuario\n");
    }
    else if(codigo == 7){
        printf("Higiene pessoal\n");
    }
     else if(codigo >= 8 && codigo <= 15){
        printf("Limpeza e untesilios domesticos\n");
    }
    else{
        printf("Invalido\n");
    }
    return 0;
}
