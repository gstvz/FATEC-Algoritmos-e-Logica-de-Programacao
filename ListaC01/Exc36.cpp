/* 
Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. 
O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio^2 * altura, onde pi = 3.141592.
*/

#include <iostream>
#include <math.h>

main() {
	float altura, raio, volume;
	
	printf(" Insira a altura do cilindro circular: ");
	scanf("%f", &altura);
	
	printf(" Insira o raio do cilindro circular: ");
	scanf("%f", &raio);
	
	volume = M_PI * pow(raio, 2) * altura;
	
	printf(" O volume do cilindro circular de raio %.2f e altura %.2f e: %.2f", raio, altura, volume);
}
