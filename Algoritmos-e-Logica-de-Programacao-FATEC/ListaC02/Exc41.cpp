#include <iostream>
#include <math.h>

int main() {
	double peso, altura, IMC;
	
	printf(" Informe o peso: \n");
	scanf("%lf", &peso);
	
	printf(" Informe a altura: \n");
	scanf("%lf", &altura);
	
	IMC = peso / pow(altura, 2);
	
	if (IMC <= 18.5) {
		printf(" Abaixo do peso. \n");
	} else if (IMC >= 18.6 && IMC <= 24.9) {
		printf(" Saudavel. \n");
	} else if (IMC >= 25.0 && IMC <= 29.9) {
		printf(" Peso em excesso. \n");
	} else if (IMC >= 30.0 && IMC <= 34.9) {
		printf(" Obesidade Grau I. \n");
	} else if (IMC >= 35.0 && IMC <= 39.9) {
		printf(" Obesidade Grau II. \n");
	} else {
		printf(" Obesidade Grau III. \n");
	}
}
