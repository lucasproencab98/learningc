#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, vetor1[20], vetor2[20], vetor3[20];
   char vetor[20];
   
   printf("-----CALCULADORA-----\n");
   
   // Loop para entrada de dados
   for (x=0; x<20; x++){
      printf("\n--- Operacao %d ---\n", x + 1);
      printf("Digite o primeiro valor: ");
      scanf("%d", &vetor1[x]);
      
      printf("Digite a operacao (+, -, *, /): ");
      // O espaço antes de %c é vital para limpar o buffer do Enter
      scanf(" %c", &vetor[x]); 
      
      printf("Digite o segundo valor: ");
      scanf("%d", &vetor2[x]);
   }
      
   // Loop para processamento
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
            if(vetor2[x] != 0) // Boa prática: evitar divisão por zero
                vetor3[x] = vetor1[x] / vetor2[x];
            else
                vetor3[x] = 0;
            break;
         default:
            vetor3[x] = 0;
            break;
      }
   } // Faltava fechar este loop no seu código original

   // Loop para exibição dos resultados
   printf("\n----- RESULTADOS -----\n");
   for (x=0; x<20; x++){
      printf("O resultado de %d %c %d = %d\n", vetor1[x], vetor[x], vetor2[x], vetor3[x]);
   }

   return 0;
}