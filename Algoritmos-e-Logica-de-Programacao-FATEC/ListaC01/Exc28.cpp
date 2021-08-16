/* 
Faça a leitura de três valores e apresente como resultado como resultado a soma dos quadrados dos três valores lidos.
*/

#include <iostream>
#include <math.h>

main() {
	int numero1, numero2, numero3, somaDosQuadrados;
	
	numero1 = 2;
	numero2 = 3;
	numero3 = 4;
	somaDosQuadrados = pow(numero1, 2) + pow(numero2, 2) + pow(numero3, 2);
	
	printf(" A soma dos quadrados de %i + %i + %i e %i", numero1, numero2, numero3, somaDosQuadrados);
}
