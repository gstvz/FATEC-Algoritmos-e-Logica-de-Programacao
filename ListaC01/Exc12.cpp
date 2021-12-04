/* 
Leia uma distancia em milhas e apresente-a convertida em quilometros.
A formula de conversao e: K = 1.61 * M, sendo K a distancia em quilometros e M em milhas.
*/

#include <iostream>
#include <math.h>

main() {
	float milhas, km;
	
	printf(" Insira a distancia em milhas: ");
	scanf("%f", &milhas);	
	
	km = 1.61 * milhas;
	
	printf(" %.2f milhas convertido para km e %.2f km ", milhas, km);	
}
