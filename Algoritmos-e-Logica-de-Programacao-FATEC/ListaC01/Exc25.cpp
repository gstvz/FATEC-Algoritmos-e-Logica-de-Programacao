/* 
Leia um valor de �rea em acres e apresente-o convertido em metros quadrados.
A formula de conversao e: M = A / 0.000247, sendo M a �rea em metros quadrados e A a �rea em acres.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, acres;
	
	printf(" Insira valor da area em acres: ");
	scanf("%f", &acres);
		
	metros = acres / 0.000247;
	
	printf(" %.2f acres convertidos para metros e %.2f metros ", acres, metros);
}
