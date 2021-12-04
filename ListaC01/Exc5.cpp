// Leia um numero real e imprima a quinta parte desse numero

#include <iostream>
#include <math.h>

main() {
	float numero, quintaParte;
	
	printf(" Inisira um numero real: ");
	scanf("%f", &numero);	
	
	quintaParte = numero / 5;
	
	printf(" A quinta parte de %.2f e %.2f ", numero, quintaParte);	
}
