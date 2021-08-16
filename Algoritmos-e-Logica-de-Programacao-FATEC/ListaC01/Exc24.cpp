/* 
Leia um valor de área em metros e apresente-o convertido em acres.
A formula de conversao e: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.
*/

#include <iostream>
#include <math.h>

main() {
	float metros, acres;
	
	metros = 4046.86;
	acres = metros * 0.000247;
	
	printf(" %.2f metros convertidos para acres e %.2f acres ", metros, acres);
}
