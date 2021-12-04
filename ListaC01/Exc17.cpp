/* 
Leia o valor de comprimento em centímetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/

#include <iostream>
#include <math.h>

main() {
	float polegadas, centimetros;
	
	printf(" Insira a medida em centimetros: ");
	scanf("%f", &centimetros);
		
	polegadas = centimetros / 2.54;
	
	printf(" %.2f centimetros convertidas para polegadas e %.2f polegadas ", centimetros, polegadas);
}
