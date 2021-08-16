/* 
Leia um angulo em radianos e apresente-o convertido em graus.
A formula de conversao e: G = R * 180/pi, sendo G o angulo em graus e R em radianos e pi = 3:14.
*/

#include <iostream>
#include <math.h>

main() {
	float angulo, radiano;
	
	radiano = 3.142;
	angulo = radiano * 180/M_PI;
	
	printf(" %.2f rad convertido para graus e %.2f graus ", radiano, angulo);
}
