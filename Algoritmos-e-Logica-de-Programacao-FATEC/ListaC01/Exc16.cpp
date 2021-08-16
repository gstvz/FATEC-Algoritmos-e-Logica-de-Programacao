/* 
Leia o valor de comprimento em polegadas e apresente-o convertido em centímetros.
A formula de conversao e: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/

#include <iostream>
#include <math.h>

main() {
	float polegadas, centimetros;
	
	polegadas = 39.37;
	centimetros = polegadas * 2.54;
	
	printf(" %.2f polegadas convertidas para centimetros e %.2f centimetros ", polegadas, centimetros);
}
