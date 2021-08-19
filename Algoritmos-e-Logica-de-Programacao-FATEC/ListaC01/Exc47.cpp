/* 
Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <iostream>
#include <math.h>

main() {
	int numero, milhar, centena, dezena, unidade;
	
	numero = 1673;
	milhar = numero / 1000;
	centena = numero / 100 - 10 * milhar;
	dezena = numero / 10 - 100 * milhar - 10 * centena;
	unidade = numero / 1 - 1000 * milhar - 100 * centena - 10 * dezena;
	
	printf(" Numero: %i \n %i \n %i \n %i \n %i", numero, milhar, centena, dezena, unidade);
}
