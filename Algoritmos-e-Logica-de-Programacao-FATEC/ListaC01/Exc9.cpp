/* 
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
A formula de conversao e: K = C + 273.15, sendo K a temperatura em Kelvin e C a temperatura em Celsius.
*/

#include <iostream>
#include <math.h>

main() {
	float celsius, kelvin;
	
	printf(" Insira a temperatura em Celsius: ");
	scanf("%f", &celsius);
		
	kelvin = celsius + 273.15;
	
	printf(" %.2f C convertido para Kelvin e %.2f C ", celsius, kelvin);	
}
