/* 
Leia um valor de massa em quilogramas e apresente-o convertido em libras.
A formula de conversao e: L = K / 0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include <iostream>
#include <math.h>

main() {
	float kg, libras;
	
	printf(" Insira a massa em kgs: ");
	scanf("%f", &kg);
		
	libras = kg / 0.45;
	
	printf(" %.2f kgs convertidos para libras e %.2f libras ", kg, libras);
}
