/* 
Leia o valor do raio de um c�rculo e calcule e imprima a �rea do c�rculo correspondente. A �rea do c�rculo � pi * raio^2, considere pi = 3.141592.
*/

#include <iostream>
#include <math.h>

main() {
	float raio, area;
	
	printf(" Insira o valor do raio do circulo: ");
	scanf("%f", &raio);

	area = M_PI * pow(raio, 2);
	
	printf(" O raio do circulo e %.2f e sua area e: %.2f", raio, area);
}
