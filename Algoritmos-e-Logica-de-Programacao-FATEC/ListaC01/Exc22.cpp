/* 
Leia um valor de comprimento em jardas e apresente-o convertido em metros.
A formula de conversao e: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.
*/

#include <iostream>
#include <math.h>

main() {
	float jardas, metros;
	
	jardas = 109.36;
	metros = 0.91 * jardas;
	
	printf(" %.2f jardas convertidas para metros e %.2f metros ", jardas, metros);
}
