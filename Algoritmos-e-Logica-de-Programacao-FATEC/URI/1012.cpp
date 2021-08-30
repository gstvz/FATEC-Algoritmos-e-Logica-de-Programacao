#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {

	double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	double pi = 3.14159;
	scanf("%lf %lf %lf", &A, &B, &C);
	TRIANGULO = (A * C)/2;
	CIRCULO = pow(C, 2) * pi;
	TRAPEZIO = (A + B) * C / 2;
	QUADRADO = B * B;
	RETANGULO = A * B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
	
	return 0;
}
