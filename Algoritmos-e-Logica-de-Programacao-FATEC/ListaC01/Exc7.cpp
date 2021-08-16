/* 
Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversao e: C = 5 * (F - 32.0)/9.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <iostream>
#include <math.h>

main() {
	float celsius, fahrenheit;
	
	fahrenheit = 99.5;
	celsius = 5 * (fahrenheit - 32) / 9.0;
	
	printf(" %.2f F convertido para Celsius e %.2f C ", fahrenheit, celsius);	
}
