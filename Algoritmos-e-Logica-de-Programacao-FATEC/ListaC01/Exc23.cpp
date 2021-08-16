/* 
Leia um valor de comprimento em metros e apresente-o convertido em jardas.
A formula de conversao e: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento em metros.
*/

#include <iostream>
#include <math.h>

main() {
	float jardas, metros;
	
	metros = 100;
	jardas = metros / 0.91;
	
	printf(" %.2f metros convertidos para jardas e %.2f jardas ", metros, jardas);
}
