/* 
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.
A formula de conversao e: C = K - 273.15, sendo K a temperatura em Kelvin e C a temperatura em Celsius.
*/

#include <iostream>
#include <math.h>

main() {
	float celsius, kelvin;
	
	printf(" Insira a temperatura em Kelvin: ");
	scanf("%f", &kelvin);
	
	celsius = kelvin - 273.15;
	
	printf(" %.2f K convertido para Celsius e %.2f C ", kelvin, celsius);	
}
