/* 
Leia o valor de comprimento em cent�metros e apresente-o convertido em polegadas.
A formula de conversao e: P = C/2.54, sendo C o comprimento em cent�metros e P o comprimento em polegadas.
*/

#include <iostream>
#include <math.h>

main() {
	float polegadas, centimetros;
	
	centimetros = 100;
	polegadas = centimetros / 2.54;
	
	printf(" %.2f centimetros convertidas para polegadas e %.2f polegadas ", centimetros, polegadas);
}
