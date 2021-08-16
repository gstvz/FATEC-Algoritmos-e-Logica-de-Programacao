// Leia um numero real e imprima o resultado do quadrado desse numero.

#include <iostream>
#include <math.h>

main() {
	float numero, quadrado;
	
	numero = 5.5;
	quadrado = pow(numero, 2);
	
	printf(" O quadrado de %.2f e %.2f ", numero, quadrado);	
}
