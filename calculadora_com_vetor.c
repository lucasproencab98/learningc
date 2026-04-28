#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, vetor1[20], vetor2[20], vetor3[20];
   char vetor[20];
   
   printf("-----CALCULADORA-----\n");
   
   for (x=0; x<20; x++){
      printf("\n--- Operacao %d ---\n", x + 1);
      printf("Digite o primeiro valor: ");
      scanf("%d", &vetor1[x]);
      
      printf("Digite a operacao (+, -, *, /): ");
      scanf(" %c", &vetor[x]); 
      
      printf("Digite o segundo valor: ");
      scanf("%d", &vetor2[x]);
   }
      

   for (x=0; x<20; x++){
      switch (vetor[x]){
         case '+':
            vetor3[x] = vetor1[x] + vetor2[x];
            break;
         case '-':
            vetor3[x] = vetor1[x] - vetor2[x];
            break;
         case '*':
            vetor3[x] = vetor1[x] * vetor2[x];
            break;
         case '/':
            if(vetor2[x] != 0) 
                vetor3[x] = vetor1[x] / vetor2[x];
            else
                vetor3[x] = 0;
            break;
         default:
            vetor3[x] = 0;
            break;
      }
   } 
   
   printf("\n----- RESULTADOS -----\n");
   for (x=0; x<20; x++){
      printf("O resultado de %d %c %d = %d\n", vetor1[x], vetor[x], vetor2[x], vetor3[x]);
   }

   return 0;
}