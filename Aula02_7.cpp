#include <iostream>
#include <math.h>

main() {
	int numero;
	float raizQuadrada, raizCubica;
	
	printf(" Insira um numero: ");
	scanf("%i", &numero);
	
	raizQuadrada = pow(numero, 0.5);
	raizCubica = pow(numero, 0.333);
	
	printf(" A raiz quadrada e: %.2f", raizQuadrada);
	printf(" A raiz cubica e: %.2f", raizCubica);
}
