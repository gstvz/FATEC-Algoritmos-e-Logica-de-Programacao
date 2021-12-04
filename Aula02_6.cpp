#include <iostream>

main() {
	int dividendo, divisor, resto, quociente;
	
	printf(" Insira o dividendo: ");
	scanf("%i", &dividendo);
	
	printf(" Insira o divisor: ");
	scanf("%i", &divisor);
	
	resto = dividendo % divisor;
	quociente = dividendo / divisor;
	
	printf(" O resto da divisao e: %i \n", resto);
	printf(" O quociente da divisao e: %i", quociente);
}
