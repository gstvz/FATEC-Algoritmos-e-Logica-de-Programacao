/* 
Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida pela equa��o: hipotenusa = raiz de a^2 + b^2.
Fa�a um programa que receba os valores de a e b e calcule o valor da hipotenusa atrav�s da equa��o. Imprima o resultado.
*/

#include <iostream>
#include <math.h>

main() {
	float a, b, hipotenusa;
	
	a = 5;
	b = 6;
	hipotenusa = pow(pow(a, 2) + pow(b, 2), 0.5);
	
	printf(" A hipotenusa do triangulo com os catetos %.2f e %.2f e: %.2f", a, b, hipotenusa);
}
