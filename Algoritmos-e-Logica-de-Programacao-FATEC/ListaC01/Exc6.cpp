/* 
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <iostream>
#include <math.h>

main() {
	float celsius, fahrenheit;
	
	celsius = 37.5;
	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	printf(" %.2f C convertido para Fahrenheit e %.2f F ", celsius, fahrenheit);	
}
