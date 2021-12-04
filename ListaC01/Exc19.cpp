/* 
Leia o valor de volume em litros e apresente-o convertido em metros cubicos.
A formula de conversao e: M = L / 1000, sendo L o volume em litros e M o volume em metros cubicos.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, litros;
	
	printf(" Insira o volume em litros: ");
	scanf("%f", &litros);
		
	metros = litros / 1000;
	
	printf(" %.2f metros cubicos convertidos para litros e %.2f litros ", litros, metros);
}
