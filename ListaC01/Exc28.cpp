/* 
Faça a leitura de três valores e apresente como resultado como resultado a soma dos quadrados dos três valores lidos.
*/

#include <iostream>
#include <math.h>

main() {
	int numero1, numero2, numero3, somaDosQuadrados;
	
	printf(" Insira o primeiro numero: ");
	scanf("%i", &numero1);
	
	printf(" Insira o segundo numero: ");
	scanf("%i", &numero2);
	
	printf(" Insira o terceiro numero: ");
	scanf("%i", &numero3);

	somaDosQuadrados = pow(numero1, 2) + pow(numero2, 2) + pow(numero3, 2);
	
	printf(" A soma dos quadrados de %i + %i + %i e %i", numero1, numero2, numero3, somaDosQuadrados);
}
