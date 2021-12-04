/* 
Leia um valor de área em metros quadrados e apresente-o convertido em hectares.
A formula de conversao e: H = M * 0.0001, sendo M a área em metros quadrados e H a área em hectares.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, hectares;
	
	printf(" Insira o valor da area em metros quadrados: ");
	scanf("%f", &metros);
		
	hectares = metros * 0.0001;
	
	printf(" %.2f metros convertidos para hectares e %.2f hectares ", metros, hectares);
}
