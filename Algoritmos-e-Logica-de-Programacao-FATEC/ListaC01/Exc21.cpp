/* 
Leia um valor de massa em libras e apresente-o convertido em quilogramas.
A formula de conversao e: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include <iostream>
#include <math.h>

main() {
	float kg, libras;
	
	libras = 222.22;
	kg = libras * 0.45;
	
	printf(" %.2f libras convertidas para kg e %.2f kg ", libras, kg);
}
