#include <iostream>

main() {
	int dividendo, divisor, resto, quociente;
	
	printf(" Insira o dividendo: ");
	scanf("%i", &dividendo);
	
	printf(" Insira o divisor: ");
	scanf("%i", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	printf("O numero %i dividido por %i tem como quociente %i e resto %i", dividendo, divisor, quociente, resto);
}
