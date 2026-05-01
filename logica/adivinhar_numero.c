#include <stdio.h>

int main() {
   int NUM=0, CHUTE=0, TENT=0;
   printf("Digite o numero a ser adivinhado:\n");
   scanf("%d", &NUM);
   do{
       printf("Digite o numero de chute:\n");
       scanf("%d", &CHUTE);
       TENT++;
       if(CHUTE > NUM){
            printf("Chutou alto!\n");
       }
       else if(CHUTE < NUM){
            printf("Chutou baixo!\n");
       }
   }while(NUM != CHUTE);
   printf("Acertou\nO numero e %d\n", NUM);
   printf("Tentativas = %d", TENT);

    return 0;
}
