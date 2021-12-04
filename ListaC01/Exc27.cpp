/* 
Leia um valor de área em hectares e apresente-o convertido em metros quadrados.
A formula de conversao e: M = H * 10000, sendo M a área em metros quadrados e H a área em hectares.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, hectares;
	
	printf(" Insira o valor da area em hectares: ");
	scanf("%f", &hectares);
	
	metros = hectares * 10000;
	
	printf(" %.2f hectares convertidos para metros e %.2f metros ", hectares, metros);
}
