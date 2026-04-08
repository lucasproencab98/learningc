#include <stdio.h>
#include <math.h> 

int main() {
	float ladoA, ladoB, ladoC;
	
	printf("-------CALCULANDO O TIPO DE TRIANGULO\n Seu triangulo é EQUILATERO, ISOCELES OU ESCALENO?-------\n");
	printf("Digite o primeiro lado do triangulo:\n");
	scanf("%f", &ladoA);
	printf("Digite o segundo lado do triangulo:\n");
	scanf("%f", &ladoB);
	printf("Digite o terceiro lado do triangulo:\n");
	scanf("%f", &ladoC);
	
	if ( ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB){
		if ( ladoA == ladoB && ladoB == ladoC){
			printf("O seu triangulo é equilatero\n");
		}
		else if ( ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
			printf("O seu triangulo é isoceles\n");
		}
		else if ( ladoA != ladoB && ladoB != ladoC && ladoA != ladoC){
			printf("O seu triangulo é escaleno\n");
		}
	}
	else{
		printf("Voce não tem um triangulo\n");
	}
	
	
	
}