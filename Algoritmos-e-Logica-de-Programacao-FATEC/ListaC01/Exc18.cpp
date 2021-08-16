/* 
Leia o valor de volume em metros cubicos e apresente-o convertido em litros.
A formula de conversao e: L = 1000 * M, sendo L o volume em litros e M o volume em metros cubicos.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, litros;
	
	metros = 10;
	litros = 1000 * metros;
	
	printf(" %.2f metros cubicos convertidos para litros e %.2f litros ", metros, litros);
}
