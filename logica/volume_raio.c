#include <stdio.h>
#include <math.h> 

int main() {
	float volume_raio;
	const float valor_pi = 3.14159;
	printf("-------CALCULANDO O VOLUME DE UMA ESFERA DE RAIO-------\n");
	printf("Informe o valor do raio:\n");
	scanf("%f", &volume_raio);
	volume_raio = (4.0/3.0) * (valor_pi * pow(volume_raio, 3.0));
	printf ("O volume desta esfera de raio é: %.2f", volume_raio);
	return 0;

}
