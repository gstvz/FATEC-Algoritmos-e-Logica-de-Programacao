/* 
Leia um angulo em graus e apresente-o convertido em radianos.
A formula de conversao e: R = G * pi/180, sendo G o angulo em graus e R em radianos e pi = 3:14.
*/

#include <iostream>
#include <math.h>

main() {
	float angulo, radiano;
	
	printf(" Insira a medida do angulo em graus: ");
	scanf("%f", &angulo);	
	
	radiano = angulo * M_PI/180;
	
	printf(" %.2f graus convertido para radiano e %.2f rad ", angulo, radiano);
}
