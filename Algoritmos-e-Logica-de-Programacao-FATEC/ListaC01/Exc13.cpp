/* 
Leia uma distancia em quilometros e apresente-a convertida em milhas.
A formula de conversao e: M = K/1.61, sendo K a distancia em quilometros e M em milhas.
*/

#include <iostream>
#include <math.h>

main() {
	float milhas, km;
	
	km = 100;
	milhas = km/1.61;
	
	printf(" %.2f km convertido para milhas e %.2f milhas ", km, milhas);
}
