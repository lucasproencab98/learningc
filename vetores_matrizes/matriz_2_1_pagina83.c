#include <stdio.h>
#include <stdbool.h>

int main(){

//a ordem na declaração é páginas - linhas - colunas//
int matriz1[3][2][4];

printf("-------Preenchendo a matriz de tres dimensoes-------\n");
for (int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        for (int k=0; k<4; k++){
          printf("posicao [%d][%d][%d]\n", k+1, j+1, i+1);
          scanf("%d", &matriz1[i][j][k]);  
        }
    }
}

printf("-------Output da matriz de tres dimensoes-------\n");
for (int i=0; i<3; i++){
    printf("\n");
    for(int j=0; j<2; j++){
        printf("\n");
        for (int k=0; k<4; k++){
            printf("%2d", matriz1[i][j][k]);
        }
    }
}

return 0;

}